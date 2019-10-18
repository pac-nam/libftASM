section .text
	global _ft_memcmp

.return:
	ret							; return

_ft_memcmp:
	cmp		rdi, 0				; if (rdi == NULL)
	je		.return				; jump to return
	cmp		rsi, 0				; if (rsi == NULL)
	je		.return				; jump to return
	push	rdi
	push	rsi
	mov		rax, rsi			; rax = rsi
	mov		rcx, rdx			; rcx = rdx
	repe cmpsb					; while (--rcx) {rdi[rcx] = rax[rcx]}
	sub		rdx, rcx			; rdx -= rcx
	xor		rax, rax
	pop		rdi
	pop		rsi
	mov		al, [rdi + rdx]	; rax = *(rdi + rdx)
	sub		al, [rsi + rdx]	; rax -= *(rsi + rdx)
	jmp		.return				; jump to return
