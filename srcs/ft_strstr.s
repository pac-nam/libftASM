section .text
	global _ft_strstr
	extern _ft_strncmp
	extern _ft_strlen
	extern _ft_puts

.ret_null:
	mov		rax, 0			; rax = 0
	jmp		.return			; jump to .return
.ret_rdi:
	mov		rax, rdi		; rax = rdi

.return:
	pop		rdi				; restore rdi
	ret						; return

_ft_strstr:
	push	rdi				; save rdi
	cmp		rdi, 0			; if (rdi == NULL)
	je		.ret_null		; jump to .ret_null
	cmp		rsi, 0			; if (rsi == NULL)
	je		.ret_null		; jump to .ret_null
	push	rdi				; save rdi (2)
	mov		rdi, rsi		; rdi = rsi
	call	_ft_strlen		; rax = ft_strlen(rdi)
	mov		rdx, rax		; rdx = rax
	pop		rdi				; restore rdi (2)
.looop:
	push	rdx				; save rdx
	call	_ft_strncmp		; rax = ft_strncmp(rdi, rsi, rdx)
	pop		rdx				; restore rdx
	cmp		rax, 0			; if (rax == 0)
	je		.ret_rdi		; jump to .ret_rdi
	cmp		byte[rdi], 0	; if (*rdi == '\0')
	je		.ret_null		; jump to .ret_null
	inc		rdi				; rdi++
	jmp		.looop			; jump to .looop