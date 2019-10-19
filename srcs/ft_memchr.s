section .text
	global _ft_memchr

.null:
	mov		rax, 0				; rax = 0
	ret							; return

.end:
	mov		rax, rdi			; rax = rdi
	pop		rdi					; restore rdi
	ret							; return

_ft_memchr:
	cmp		rdi, 0				; if (rdi == NULL)
	je		.null				; jump to .null
	cmp		rdx, 0				; if (rdx == NULL)
	je		.null				; jump to .null
	push	rdi					; save rdi
	mov		al, sil				; rax = rsi
	mov		rcx, rdx			; rcx = rdx
	repne scasb					; while (--rcx && *rdi++ != rax);
	dec		rdi					; rdi--
	cmp		byte[rdi], al		; if (rdi == rax)
	je		.end				; jump to .end
	pop		rdi					; restore rdi
	mov		rax, 0				; rax = 0
	ret							; return
