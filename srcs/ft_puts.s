section .text
    global _ft_puts

quit:
	ret

_ft_puts:
	cmp		rdi, 0
	je		quit
	mov		rdx, -1

rdi_len:
	inc		rdx
	cmp		byte[rdi + rdx], 0
	jne		rdi_len

    mov		rax, 0x2000004
	mov		rsi, rdi
    mov		rdi, 1
    syscall
    ret