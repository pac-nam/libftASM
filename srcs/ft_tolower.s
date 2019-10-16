section .text
    global _ft_tolower

ret_same:
    mov		rax, rdi
    ret
	
_ft_tolower:
    cmp		rdi, 65
    jl		ret_same
    cmp		rdi, 90
    jg		ret_same
	add		rdi, 32
    mov		rax, rdi
    ret