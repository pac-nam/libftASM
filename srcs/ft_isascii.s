section .text
    global _ft_isascii

ret_zero:
    mov     rax, 0
    ret

_ft_isascii:
    cmp     rdi, 0
    jl      ret_zero
    cmp     rdi, 128
    jg      ret_zero
    mov     rax, 1
    ret