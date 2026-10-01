section .note.GNU-stack

section .text
    global ft_write
    extern __errno_location

ft_write:
    mov     rax, 1          ; write id
    syscall
    cmp     rax, 0          ; if return of write < 0
    jl      .handle_error
    ret

.handle_error:
    neg     rax             ; convert -errno to errno
    mov     edi, eax        ; errno as 32 bit
    push    rax
    call    __errno_location wrt ..plt
    pop     rdi
    mov     [rax], edi      ; *errno = error
    mov     rax, -1         ; return -1 as error
    ret