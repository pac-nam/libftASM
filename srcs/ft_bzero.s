section .text
    global _ft_bzero

quit:
	ret

_ft_bzero:
	cmp 	rsi, 0
	je		quit
	mov		byte[rdi], 0
	dec		rsi
	inc		rdi
	jmp		_ft_bzero