section .text
	global _ft_putstr
	extern _ft_strlen

_ft_putstr:
	call	_ft_strlen		; rax = ft_strlen(rdi)
	mov		rdx, rax		; rdx = 1
	mov		rsi, rdi		; rsi = rsp
	mov		rdi, 1			; rdi = rsi
	mov		rax, 0x2000004	; rax = write
	syscall					; rax = write(rdi, rsi, rdx)
	mov		rdi, rsi		; restore rsi
	ret						; return