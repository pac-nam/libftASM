
section .text
    global _ft_isalnum
    extern _ft_isdigit
    extern _ft_isalpha

ret_one:
    mov		rax, 1
    ret

_ft_isalnum:
	call	_ft_isdigit
    cmp     rax, 1
	je		ret_one
	call	_ft_isalpha
    cmp     rax, 1
	je		ret_one
    mov     rax, 0
    ret