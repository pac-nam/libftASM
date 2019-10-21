section .bss
	buff resb 255

section .text
	global _ft_cat
	extern _ft_bzero

return:
	ret						; return

_ft_cat:
	mov		r9, rdi			; save rdi (fd) in r9
	lea		rsi, [rel buff] ; rsi = buff[255]
.looop:
	mov		rdi, r9			; rdi = r9
	mov		rdx, 255		; rdx = 255
	mov		rax, 0x2000003	; rax = read
	syscall					; rax = read(rdi, rsi, rdx)
	jc		return			; jump to return
	cmp		rax, 0			; if (rax == 0)
	je		return			; jump to return
	mov		rdx, rax		; rdx = rax
	mov		rdi, 1			; rdi = 1
	mov		rax, 0x2000004	; rax = write
	syscall					; rax = write(1, rsi, rdx)
	jmp		.looop			; jump to .loop
