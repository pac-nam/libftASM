section .text
	global _ft_strnequ
	extern _ft_strncmp

.ret_one:
	mov			rax, 1		; rax = 1
	ret						; return

_ft_strnequ:
	call		_ft_strncmp	; rax = ft_strncmp(rdi, rsi, rdx)
	cmp			rax, 0		; if (rax == 0)
	je			.ret_one	; jump to .ret_one
	mov			rax, 0		; rax = 0
	ret						; return