
section .data
	null db "(null)", 10	; null = "null\n"

section .text
	global _ft_puts
	extern _ft_strlen

put_null:
	mov		rdi, 1			; rdi(fd) = 1
	lea		rsi, [rel null]	; rsi(str) = null
	mov		rdx, 7			; rdx(len) = 7
	jmp		end				; jump to end

_ft_puts:
	push	rdi				; save rdi
	cmp		rdi, 0			; if (param == NULL)
	je		put_null		; print("(null)")
	call	_ft_strlen		; rax = strlen(param)
	mov		rdx, rax		; rdx(len) = rax
	mov		rsi, rdi		; rsi(str) = rdi(param1)
	mov		rdi, 1			; rdi(fd) = 1
	jmp		end				; jump to end

end:
	mov		rax, 0x2000004	; rax = write
	syscall					; write(rdi, rsi, rdx)
	mov		rax, 10			; rax = 10
	pop		rdi				; restore rdi
	ret						; return