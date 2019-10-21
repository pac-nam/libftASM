section .text
	global _ft_toupper

.ret_same:
	mov		rax, rdi		; rax = rdi
.return:
	pop		rdi				; restore rdi
	ret						; return
	
_ft_toupper:
	push	rdi				; save rdi
	cmp		rdi, 97			; if (rdi < 'a')
	jl		.ret_same		; jump to .ret_same
	cmp		rdi, 122		; if (rdi > 'z')
	jg		.ret_same		; jump to .ret_same
	mov		rax, rdi		; rax = rdi
	sub		rax, 32			; rax += 32
	jmp		.return			; jump to .return