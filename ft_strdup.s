global _ft_strdup
extern _ft_strlen
extern _malloc
extern _ft_strcpy

_ft_strdup:
	call	_ft_strlen	; call ft_strlen [rax = len of rdi(argv[0])]
	add		rax, 1		; rax + 1, for '\0' end
	push	rdi			; push rdi to the stack
	mov		rdi, rax	; rdi = rax 
	call	_malloc		; malloc return (string malloc in rax)
	pop		r8			; pop old rdi to r8
	mov		rdi, rax	
	mov		rsi, r8
	call	_ft_strcpy
	ret
	
	

