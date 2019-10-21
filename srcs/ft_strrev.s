section .text
	global _ft_strrev
	extern _ft_strlen
	extern _ft_memrev

_ft_strrev:
	call	_ft_strlen			; rax = ft_strlen(rdi)
	mov		rsi, rax 			; rdx = rax
	call	_ft_memrev			; rax = ft_memrev(rdi, rdx)
	ret							; return
