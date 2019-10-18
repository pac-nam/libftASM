section .text
	global _ft_isalpha

ret_zero:
	mov		rax, 0		; rax = 0
return:
	ret					; return

_ft_isalpha:
	cmp		rdi, 96		; if (rdi > 'a' - 1)
	jg		is_lower	; jump to is_lower
	cmp		rdi, 65		; if (rdi > 'A')
	jl		ret_zero	; jump to ret_zero
	cmp		rdi, 90		; if (rdi > 'Z')
	jg		ret_zero	; jump to ret_zero
	mov		rax, 1		; rax = 1
	jmp		return		; jump to return

is_lower:
	cmp		rdi, 122	; if (rdi < 'z')
	jg		ret_zero	; jump to ret_zero
	mov		rax, 1		; rax = 1
	jmp		return		; jump to return
