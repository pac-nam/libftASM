section .text
	global _ft_strchr
	extern _ft_strlen
	extern _ft_memchr

_ft_strchr:
	call	_ft_strlen			; rax = ft_strlen(rdi)
	mov		rdx, rax 			; rdx = rax
	inc		rdx
	call	_ft_memchr			; rax = ft_memchr(rdi, rsi, rdx)
	ret							; return
