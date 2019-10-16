section .text
    global _ft_bzero

quit:
	ret

_ft_bzero:
	cmp 	rsi, 0
	je		quit
	dec		rsi
	mov		byte[rdi + rsi], 0
	jmp		_ft_bzero