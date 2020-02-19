global _ft_strcpy

_ft_strcpy:
	mov		rax, 0
	jmp		copy_src

copy_src:
	cmp		BYTE [rsi + rax] , 0
	je		exit
	mov		BYTE [rdi + rax], BYTE [rsi + rax]
	inc		rax
	jmp		copy_src	

exit:
	ret		rdi
