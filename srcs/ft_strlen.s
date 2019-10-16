section .text
    global _ft_strlen

ret_zero:
    mov     rax, 0
return:
    ret

_ft_strlen:
    cmp     rdi, 0
    je      ret_zero
	xor		al, al
	xor		rax, rax
	mov		rcx, -1
	repne scasb
	add		rcx, 2
	sub		rax, rcx
	ret
