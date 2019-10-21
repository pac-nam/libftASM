section .text
	global _ft_strcpy
	extern _ft_strlen
	extern _ft_memcpy

.return:
	pop		rax					; restore rdi in rax
	ret							; return

_ft_strcpy:
	push	rdi					; save rdi
	cmp		rdi, 0				; if (rdi == NULL)
	je		.return				; jump to .return
	cmp		rsi, 0				; if (rsi == NULL)
	je		.return				; jump to .return
	mov		rdi, rsi			; rdi = rsi
	call	_ft_strlen			; rax = ft_strlen(rdi)
	mov		rdx, rax			; rdx = rax
	pop		rdi					; restore rdi
	mov		byte[rdi + rdx], 0	; *(rdi + rax) = '\0'
	call	_ft_memcpy			; rax = ft_memcpy(rdi, rsi, rdx)
	ret							; return