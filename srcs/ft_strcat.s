section .text
    global _ft_strcat
    extern _ft_strcpy

ret_zero:
    mov     rax, 0
    ret

ret_rdi:
	mov		rax, rdi
	ret

_ft_strcat:
    cmp     rdi, 0
    je      ret_zero
	xor		r10, rdi

ft_rdi_len:
    cmp     byte[rdi], 0
	je		copy_rsi;
	inc		rdi
	jmp		ft_rdi_len

copy_rsi:
	call	_ft_strcpy
	cmp		rax, 0
	je		ret_zero
	mov		rdi, r10
	mov		rax, rdi
	ret