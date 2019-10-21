section .text
	global _ft_memset

.return:
	pop		rax			; restore rdi in rax
	ret					; return

_ft_memset:
	push	rdi			; save rdi
	cmp     rdi, 0		; if (rdi == NULL)
	je      .return		; jump to .return
	mov		rcx, rdx	; rcx = rdx (count = param3)
	mov		rax, rsi	; rax = rsi (char_to_set = param2)
	rep stosb			; while (rcx--) {*rdi++ = rax}
	mov		rax, rdi	; rax = rdi
	jmp		.return		; jump to .return
