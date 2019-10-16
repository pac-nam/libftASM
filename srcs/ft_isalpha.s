section .text
    global _ft_isalpha

ret_zero:
    mov		rax, 0
    ret

ret_one:
	mov		rax, 1
	ret

is_lower:
	cmp		rdi, 122
    jg		ret_zero
	mov		rax, 1
	ret
	
_ft_isalpha:
    cmp		rdi, 96
    jg		is_lower
    cmp		rdi, 65
    jl		ret_zero
    cmp		rdi, 90
    jg		ret_zero
    mov		rax, 1
    ret