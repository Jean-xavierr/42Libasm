global _ft_strcpy

_ft_strcpy:
	mov		rax, 0
	jmp		copy_src

copy_src:
	cmp		BYTE [rsi + rax], 0
	je		exit
	mov		cl, [rsi + rax]
	mov 	[rdi + rax], cl
	inc		rax
	jmp		copy_src	

exit:
	mov		cl, 0
	mov		[rdi + rax], cl
	mov		rax, rdi
	ret
