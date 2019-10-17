section .text
	global _ft_bzero

quit:
	pop		rdi					; restore rdi
	ret							; return

_ft_bzero:
	push	rdi					; save rdi
	cmp		rdi, 0				; if (rdi == 0)
	je		quit				; jump to quit

ft_bzero_second:
	cmp 	rsi, 0				; if (rsi == 0)
	je		quit				; jump to quit
	dec		rsi					; rsi--
	mov		byte[rdi + rsi], 0	; *(rdi + rsi) = 0
	jmp		ft_bzero_second		; jump to ft_bzero_second