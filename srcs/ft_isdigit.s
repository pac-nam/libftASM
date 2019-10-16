section .text
    global _ft_isdigit

ret_zero:
    mov     rax, 0
    ret

_ft_isdigit:
    cmp     rdi, 57
    jg      ret_zero
    cmp     rdi, 48
    jl      ret_zero
    mov     rax, 1
    ret