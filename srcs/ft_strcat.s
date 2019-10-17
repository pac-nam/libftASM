section .data
	debug db "debug", 10

section .text
	global _ft_strcat
	extern _ft_strlen
	extern _ft_strcpy
	extern _ft_puts

ret_zero:
	mov		rax, 0			; rax = 0
	ret						; return

_ft_strcat:
	cmp		rdi, 0			; if (rdi == NULL)
	je		ret_zero		; jump to ret_zero
	push	rdi				; save rdi
	push	rsi				; save rsi
	call	_ft_strlen		; rax = ft_strlen(rdi)
	add		rdi, rax		; rdi += rax
	call	_ft_strcpy		; rax = ft_strcpy(rdi, rsi)
	cmp		rax, 0			; if (rax == NULL)
	je		ret_zero		; jump to ret_zero
	mov		rax, rdi		; rax = rdi
	pop		rdi				; resotre rdi
	pop		rsi				; resotre rsi
	ret						; return