section .text
	global _ft_bzero
	extern _ft_memset

_ft_bzero:
	push	rsi					; save rsi
	mov		rdx, rsi			; rdx = rsi
	mov		rsi, 0				; rsi = 0
	call	_ft_memset			; rax = ft_memset(rdi, rsi, rdx)
	pop		rsi					; restore rsi
	ret							; return