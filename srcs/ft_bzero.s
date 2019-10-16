section .text
    global _ft_bzero

quit:
	ret

_ft_bzero:
	cmp		rdi, 0
	je		quit

ft_bzero_second:
	cmp 	rsi, 0
	je		quit
	dec		rsi
	mov		byte[rdi + rsi], 0
	jmp		ft_bzero_second