section .text
	global _ft_memset

ret_zero:
	mov     rax, 0		; rax = 0
return:
	pop		rdi			; restore rdi
	ret					; return rax

_ft_memset:
	push	rdi			; save rdi
	cmp     rdi, 0		; if (rdi == NULL)
	je      ret_zero	; return 0
	mov		rcx, rdx	; rcx = rdx (count = param3)
	mov		rax, rsi	; rax = rsi (char_to_set = param2)
	rep stosb			; while (rcx--) {*rdi++ = rax}
	mov		rax, rdi	; rax = rdi
	jmp		return		; return
