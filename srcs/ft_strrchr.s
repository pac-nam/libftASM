section .text
	global _ft_strrchr
	extern _ft_strlen
	extern _ft_memrchr

_ft_strrchr:
	call	_ft_strlen			; rax = ft_strlen(rdi)
	mov		rdx, rax 			; rdx = rax
	inc		rdx                 ; rdx++ (for '\0')
	call	_ft_memrchr			; rax = ft_memrchr(rdi, rsi, rdx)
	ret							; return
