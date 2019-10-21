section .text
	global _ft_strnchr
	extern _ft_strlen
	extern _ft_memchr

_ft_strnchr:
	call	_ft_strlen			; rax = ft_strlen(rdi)
	cmp		rax, rdx			; if (rax >= rdx)
	jge		.compare			; jump to compare
	mov		rdx, rax 			; rdx = rax
	inc		rdx                 ; rdx++ (for '\0')
.compare:
	call	_ft_memchr			; rax = ft_memchr(rdi, rsi, rdx)
	ret							; return
