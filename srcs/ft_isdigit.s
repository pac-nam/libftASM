section .text
	global _ft_isdigit

ret_zero:
	mov		rax, 0		; rax = 0
return:
	ret					; return

_ft_isdigit:
	cmp		rdi, 57		; if (rdi > '9')
	jg		ret_zero	; jump to ret_zero
	cmp		rdi, 48		; if (rdi < '0')
	jl		ret_zero	; jump to ret_zero
	mov		rax, 1		; rax = 1
	jmp		return		; jump to return