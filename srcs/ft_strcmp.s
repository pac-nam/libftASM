section .text
	global _ft_strcmp
	extern _ft_strlen
	extern _ft_memcmp

_ft_strcmp:
	call	_ft_strlen			; rax = ft_strlen(rdi)
	mov		rdx, rax 			; rdx = rax
	inc		rdx                 ; rdx++ (for '\0')
	call	_ft_memcmp			; rax = ft_memchr(rdi, rsi, rdx)
	ret							; return
