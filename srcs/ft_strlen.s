section .text
	global _ft_strlen

.ret_zero:
	mov		rax, 0		; rax = 0
.return:
	pop		rdi			; restore rdi
	ret					; return

_ft_strlen:
	push	rdi			; save rdi
	cmp		rdi, 0		; if (rdi == NULL)
	je		.ret_zero	; jump to .ret_zero
	xor		rax, rax	; rax = 0
	mov		rcx, -1		; rcx = -1
	repnz scasb			; while (*rdi++ != 0 && --rcx) {}
	sub		rax, rcx	; rax = -rcx
	sub		rax, 2		; rax += rcx
	jmp		.return		;jump to .return
