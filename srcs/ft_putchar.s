section .text
	global	_ft_putchar

_ft_putchar:
	push	rdi				; save rdi
	mov		rax, 0x2000004	; rax = write
	mov		rsi, rsp		; rsi = rsp
	mov		rdi, 1			; rdi = 1
	mov		rdx, 1			; rdx = 1
	syscall					; rax = write(rdi, rsi, rdx)
	pop		rdi				; restore rdi
	ret						; return