section .text
	global _ft_memrchr

.null:
	mov		rax, 0				; rax = 0
.end:
	ret							; return

_ft_memrchr:
	cmp		rdi, 0				; if (rdi == NULL)
	je		.null				; jump to .null
	cmp		rdx, 0				; if (rdx == NULL)
	je		.null				; jump to .null
	mov		rax, rdi			; rax = rdi
	add		rax, rdx			; rax += rdx
.looop:
	cmp		byte[rax], sil		; if (rax == rsi)
	je		.end				; jump to .end 
	cmp		rax, rdi			; if (rax == rdi)
	jle		.null				; jump to .null
	dec		rax					; rax--
	jmp		.looop				; jump to .looop
