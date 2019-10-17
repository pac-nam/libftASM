
section .text
	global _ft_isalnum
	extern _ft_isdigit
	extern _ft_isalpha

return:
	pop	 	rdi			; restore rdi
	ret					; return

_ft_isalnum:
	push	rdi			; save rdi
	call	_ft_isdigit ; rax = ft_isdigit(rdi)
	cmp	 	rax, 1		; if (rax == 1)
	je		return		; jump to return
	call	_ft_isalpha	; rax = ft_isalpha(rdi)
	cmp	 	rax, 1		; if (rax == 1)
	je		return		; jump to return
	mov		rax, 0		; rax = 0
	jmp	 	return		; jump to return
