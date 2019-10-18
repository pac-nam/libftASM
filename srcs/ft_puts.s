
section .data
	null db "(null)", 0		; null = "null\n"
	bacn db 10				; bacn = "\n"

section .text
	global _ft_puts
	extern _ft_strlen

put_null:
	lea		rdi, [rel null]	; rdi(str) = null
	jmp		puts_start		; jump to puts_start

_ft_puts:
	push	rdi				; save rdi
	cmp		rdi, 0			; if (param == NULL)
	je		put_null		; jump to put_null
puts_start:
	call	_ft_strlen		; rax = strlen(param)
	cmp		rax, 0			; if (rax == 0)
	je		put_bacn		; jump to put_bacn
	mov		rdx, rax		; rdx(len) = rax
	mov		rsi, rdi		; rsi(str) = rdi(param1)
	mov		rdi, 1			; rdi(fd) = 1
	mov		rax, 0x2000004	; rax = write
	syscall					; write(rdi, rsi, rdx)
put_bacn:
	mov		rdi, 1			; rdi(fd) = 1
	lea		rsi, [rel bacn]	; rdi(str) = "\n"
	mov		rdx, 1			; rdx(len) = 1
	mov		rax, 0x2000004	; rax = write
	syscall					; write(rdi, rsi, rdx)
;return_10:
	mov		rax, 10			; rax = 10
	pop		rdi				; restore rdi
	ret						; return