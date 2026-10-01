section .note.GNU-stack

section .text
    global ft_read
    extern __errno_location

.handle_error:
    neg     rax         ; invert -errno
    mov     edi, eax    ; errno is 32 bit
    push    rax
    call    __errno_location wrt ..plt
    pop     rdi
    mov     [rax], edi  ; *errno = error
    mov     rax, -1     ; return -1 as error
    ret

ft_read:
    mov     rax, 0      ; read id
    syscall
    cmp     rax, 0      ; if (return of read < 0)
    jl      .handle_error
    ret