section .text
	global _ft_memcmp

.rdi_null:
	cmp		rsi, 0
	je		.return_zero
	jmp		.return_neg

.return_pos:
	mov		rax, 1				; rax = 1
	ret							; return
.return_neg:
	mov		rax, -1				; rax = -1
	ret							; return
.return_zero:
	mov		rax, 0				; rax = 0
	ret							; return

_ft_memcmp:
	cmp		rdx, 0				; if (rdi == NULL)
	je		.return_zero		; jump to return
	cmp		rdi, 0				; if (rdi == NULL)
	je		.rdi_null			; jump to return
	cmp		rsi, 0				; if (rsi == NULL)
	je		.return_pos			; jump to return
	push	rdi					; save rdi
	push	rsi					; save rsi
	mov		rcx, rdx			; rcx = rdx
	repe cmpsb					; while (--rcx) {*rdi++ = *rsi++}
	mov		dh, [rdi - 1]		; dh = *rsi
	mov		dl, [rsi - 1]		; dl = *rsi
	pop		rsi					; restore rsi
	pop		rdi					; restore rdi
	cmp		dh, dl				; if (dh == dl)
	je		.return_zero		; jump to .return_zero
	jg		.return_pos			; if (dh > dl) {jump to .return_pos}
	jl		.return_neg			; if (dh < dl) {jump to .return_neg}
