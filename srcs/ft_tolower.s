section .text
	global _ft_tolower

.ret_same:
	mov		rax, rdi		; rax = rdi
.return:
	pop		rdi				; restore rdi
	ret						; return
	
_ft_tolower:
	push	rdi				; save rdi
	cmp		rdi, 65			; if (rdi < 'a')
	jl		.ret_same		; jump to .ret_same
	cmp		rdi, 90			; if (rdi > 'z')
	jg		.ret_same		; jump to .ret_same
	mov		rax, rdi		; rax = rdi
	add		rax, 32			; rax += 32
	jmp		.return			; jump to .return