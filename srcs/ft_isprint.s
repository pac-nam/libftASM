section .text
	global _ft_isprint

ret_zero:
	mov		rax, 0		; rax = 0
return:
	ret					; return

_ft_isprint:
	cmp		rdi, 126	; if (rdi > printable_max)
	jg		ret_zero	; jump to return 0
	cmp		rdi, 32		; if (rdi < printable_min)
	jl		ret_zero	; jump to return 0
	mov		rax, 1		; rax = 0
	jmp		return		; jump to return