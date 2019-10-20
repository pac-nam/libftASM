section .text
	global _ft_memrev

.return:
	pop		rdi				; restore rdi
	mov		rax, rdi		; rax = rdi
	ret						; return

_ft_memrev:
	push	rdi				; save rdi
	cmp		rdi, 0			; if (rdi == NULL)
	je		.return			; jump to return
	mov		rdx, rdi		; rdx = rdi
	add		rdx, rsi		; rdx += rsi
	dec		rdx				; rdx--
.looop:
	cmp		rdi, rdx		; if (rdi >= rdx)
	jge		.return			; jump to .return
	mov		cl, byte[rdi]	; cl = *rdi
	mov		ch, byte[rdx]	; ch = *rdx
	mov		byte[rdi], ch	; *rdi = ch
	mov		byte[rdx], cl	; *rdx = cl
	inc		rdi				; rdi++
	dec		rdx				; rdz--
	jmp		.looop			; jump to .looop