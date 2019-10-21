section .text
	global _ft_strncmp
	extern _ft_strlen
	extern _ft_memcmp
	extern _ft_puts

_ft_strncmp:
	call	_ft_strlen			; rax = ft_strlen(rdi)
	cmp		rax, rdx			; if (rax >= rdx)
	jge		.no_change			; jump to .no_change
	mov		rdx, rax 			; rdx = rax
	inc		rdx                 ; rdx++ (for '\0')
.no_change:
	push	rdi					; save rdi
	mov		rdi, rsi			; rdi = rsi
	call	_ft_strlen			; rax = ft_strlen(rdi)
	pop		rdi					; restore rdi
	cmp		rax, rdx			; if (rax >= rdx)
	jge		.compare			; jump to .no_change
	mov		rdx, rax 			; rdx = rax
	inc		rdx     			; rdx++ (for '\0')
.compare:
	call	_ft_memcmp			; rax = ft_memcmp(rdi, rsi, rdx)
	ret							; return
