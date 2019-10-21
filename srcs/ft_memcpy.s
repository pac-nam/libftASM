section .text
	global _ft_memcpy

.return:
	pop		rax			; restore rdi in rax
	ret					; return

_ft_memcpy:
	push	rdi			; save rdi
	cmp		rdi, 0		; if (rdi == NULL)
	je		.return		; jump to return
	cmp		rsi, 0		; if (rsi == NULL)
	je		.return		; jump to return
	mov		rax, rsi	; rax = rsi
	mov		rcx, rdx	; rcx = rdx
	rep movsb			; while (--rcx) {rdi[rcx] = rax[rcx]}
	jmp		.return		; jump to return
