section .text
	global _ft_putendl
	extern _ft_putstr
	extern _ft_putchar

_ft_putendl:
	cmp		rdi, 0			; if (rdi == NULL)
	je		.return			; jump to .return
	call	_ft_putstr		; rax = ft_strlen(rdi)
	push	rdi				; save rdi
	mov		rdi, 10			; rdi = '\n'
	call	_ft_putchar		; rax - ft_putchar_fd(rdi, rsi)
	pop		rdi				; restore rdi
.return:
	ret						; return