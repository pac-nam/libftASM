section .note.GNU-stack

section .text
    global ft_read
    extern __errno_location

.handle_error:
    neg     rax         ; rax = errno
    mov     edi, eax    ; edi = errno
    push    rax         ; save errno
    call    __errno_location wrt ..plt ; rax = &errno
    pop     rdi         ; restore errno
    mov     [rax], edi  ; *errno = edi
    mov     rax, -1     ; return -1
    ret

ft_read:
    mov     rax, 0      ; rax = read syscall id
    syscall
    cmp     rax, 0      ; if (rax < 0)
    jl      .handle_error ; jump to .handle_error
    ret                 ; return