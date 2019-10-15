section .text
    global _ft_isalpha

ret_zero:
    mov rax, 0
    ret

_ft_isalpha:
    cmp rdi, 57
    jg ret_zero; jump to return 0
    cmp rdi, 48
    jl ret_zero; jump to return 0
    mov rax, 1
    ret