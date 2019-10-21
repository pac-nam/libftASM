section .text
	global _ft_putstr_fd
	extern _ft_strlen

_ft_putstr_fd:
	call	_ft_strlen		; rax = ft_strlen(rdi)
	mov		rdx, rax		; rdx = rax
	xchg	rdi, rsi		; exchange rdi <->rsi
	mov		rax, 0x2000004	; rax = write
	syscall					; rax = write(rdi, rsi, rdx)
	xchg	rdi, rsi		; restore rsi
	ret						; return