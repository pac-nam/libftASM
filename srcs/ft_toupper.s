section .text
    global _ft_toupper

ret_same:
    mov		rax, rdi
    ret
	
_ft_toupper:
    cmp		rdi, 97
    jl		ret_same
    cmp		rdi, 122
    jg		ret_same
	sub		rdi, 32
    mov		rax, rdi
    ret