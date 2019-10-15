section .data
    message db "Hello World", 10

section .text
    global _main

_main:
    mov rax, 0x2000004
    mov rdi, 1
    lea rsi, [rel message]
    mov rdx, 12
    syscall
    ret