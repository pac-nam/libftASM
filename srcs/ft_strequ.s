section .text
	global _ft_strequ
	extern _ft_strcmp

.ret_one:
	mov			rax, 1		; rax = 1
	ret						; return

_ft_strequ:
	call		_ft_strcmp	; rax = ft_strcmp(rdi, rsi)
	cmp			rax, 0		; if (rax == 0)
	je			.ret_one	; jump to .ret_one
	mov			rax, 0		; rax = 0
	ret						; return