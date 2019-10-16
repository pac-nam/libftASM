section .text
    global _ft_strcpy

ret_zero:
    mov     rax, 0
    ret

last_zero:
	mov		byte[rdi + r8], 0
ret_rdi:
	mov		rax, rdi
	ret

_ft_strcpy:
    cmp     rdi, 0
    je      ret_zero
    cmp     rsi, 0
    je      ret_rdi
	xor		r8, r8

cpy:
    cmp     byte[rsi + r8], 0
	je		last_zero
	mov		r9, [rsi + r8]
	mov		byte[rdi + r8], r9b
	inc		r8
	jmp		cpy