section .text
	global _ft_strdup
	extern _ft_strcpy
	extern _ft_strlen
	extern _malloc

.return:
	pop		rax					; restore rdi in rax
	ret							; return

_ft_strdup:
	push	rdi					; save rdi
	cmp		rdi, 0				; if (rdi == NULL)
	je		.return				; jump to .return
	call	_ft_strlen			; rax = ft_strlen(rdi)
	mov		rdi, rax			; rdx = rax
	call	_malloc				; rax = malloc(rdi)
	mov		rdi, rax			; rdi = rax
	pop		rsi					; restore rdi in rsi
	call	_ft_strcpy			; rax = ft_strcpy(rdi, rsi)
	mov		rdi, rsi			; rdi = rsi
	ret							; return