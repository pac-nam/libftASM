section .text
	global _ft_strcpy

last_zero:
	mov		byte[rdi + r8], 0	; *(rdi + r8) = 0
return:
	pop		rax					; restore rdi in rax
	ret							; return

_ft_strcpy:
	push	rdi					; save rdi
	cmp		rdi, 0				; if (rdi == NULL)
	je		return				; jump to return
	cmp		rsi, 0				; if (rsi == NULL)
	je		return				; jump to return
	xor		r8, r8				; r8 = 0

cpy:
	cmp		byte[rsi + r8], 0	; if (*(rsi + r8) == '\0')
	je		last_zero			; jump to last_zero
	mov		r9, [rsi + r8]		; r9 = *(rsi + r8)
	mov		byte[rdi + r8], r9b	; *(rdi + r8) = r9
	inc		r8					; r8++
	jmp		cpy					; jump to cpy