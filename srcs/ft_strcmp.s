section .note.GNU-stack

section .text
	global ft_strcmp
	extern ft_strlen
	extern ft_memcmp

ft_strcmp:
	call	ft_strlen			; rax = ft_strlen(rdi)
	mov		rdx, rax 			; rdx = rax
	inc		rdx                 ; rdx++ (for '\0')
	call	ft_memcmp			; rax = ft_memchr(rdi, rsi, rdx)
	ret							; return
