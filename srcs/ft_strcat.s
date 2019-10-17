section .data
	debug db "debug", 10

section .text
	global _ft_strcat
	extern _ft_strlen
	extern _ft_strcpy

_ft_strcat:
	mov		rax, rdi		; rax = rsi
	push	rax				; save rax
	call	_ft_strlen		; rax = ft_strlen(rdi)
	add		rdi, rax		; rdi += rax
	call	_ft_strcpy		; rax = ft_strcpy(rdi, rsi)
	pop		rax				; restore rax
	ret						; return