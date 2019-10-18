
section .text
	global _ft_isalnum
	extern _ft_isdigit
	extern _ft_isalpha

return:
	ret					; return

_ft_isalnum:
	call	_ft_isdigit ; rax = ft_isdigit(rdi)
	cmp	 	rax, 1		; if (rax == 1)
	je		return		; jump to return
	call	_ft_isalpha	; rax = ft_isalpha(rdi)
	jmp	 	return		; jump to return
