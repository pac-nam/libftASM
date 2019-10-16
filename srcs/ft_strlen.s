section .text
    global _ft_strlen

ret_zero:
    mov     rax, 0
    ret

_ft_strlen:
    cmp     rdi, 0
    je      ret_zero
	xor		rax, rax
	mov		rcx, -1
	repnz scasb
	sub		rax, rcx
	sub		rax, 2
	ret
