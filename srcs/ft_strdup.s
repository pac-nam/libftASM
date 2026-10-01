section .note.GNU-stack

section .text
	global ft_strdup
	extern ft_strcpy
	extern ft_strlen
	extern malloc

.return:
	pop		rax					; restore rdi in rax
	mov		rax, 0				; rax = 0
	ret							; return

ft_strdup:
	push	rdi					; save rdi
	cmp		rdi, 0				; if (rdi == NULL)
	je		.return				; jump to .return
	call	ft_strlen			; rax = ft_strlen(rdi)
	mov		rdi, rax			; rdx = rax
    call    malloc wrt ..plt   ; rax = malloc(rdi) through the Procedure Linkage Table
    cmp    	rax, 0				; if (rax == 0)
    je      .return				; jump to .return
	mov		rdi, rax			; rdi = rax
	pop		rsi					; restore rdi in rsi
	call	ft_strcpy			; rax = ft_strcpy(rdi, rsi)
	mov		rdi, rsi			; rdi = rsi
	ret							; return