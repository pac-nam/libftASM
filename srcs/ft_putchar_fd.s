section .text
	global	_ft_putchar_fd

_ft_putchar_fd:
	push	rsi				; save rsi
	push	rdi				; save rdi
	mov		rax, 0x2000004	; rax = write
	mov		rdi, rsi		; rdi = rsi
	mov		rsi, rsp		; rsi = rsp
	mov		rdx, 1			; rdx = 1
	syscall					; rax = write
	pop		rdi				; restore rdi
	pop		rsi				; restore rsi
	ret						; return