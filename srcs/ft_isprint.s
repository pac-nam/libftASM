section .text
    global _ft_isprint

ret_zero:
    mov		rax, 0
    ret

_ft_isprint:
    cmp		rdi, 126
    jg		ret_zero; jump to return 0
    cmp		rdi, 32
    jl		ret_zero; jump to return 0
    mov		rax, 1
    ret