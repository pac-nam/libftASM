section .text
	global _ft_putendl_fd
	extern _ft_putstr_fd
	extern _ft_putchar_fd

_ft_putendl_fd:
	cmp		rdi, 0			; if (rdi == NULL)
	je		.return			; jump to .return
	call	_ft_putstr_fd	; rax = ft_strlen(rdi)
	push	rdi				; save rdi
	mov		rdi, 10			; rdi = '\n'
	call	_ft_putchar_fd	; rax - ft_putchar_fd(rdi, rsi)
	pop		rdi				; restore rdi
.return:
	ret						; return