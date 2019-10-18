section .text
	global _ft_isascii

ret_zero:
	mov		rax, 0		; rax = 0
return:
	ret					; return

_ft_isascii:
	cmp		rdi, 0		; if (rdi < 0)
	jl		ret_zero	; jump to ret_zero
	cmp		rdi, 127	; if (rdi > 127)
	jg		ret_zero	; jump to ret_zero
	mov		rax, 1		; rax = 1
	jmp		return		; jump to return