global _ft_strcpy

_ft_strcpy:
	mov		rax, 0				; init rax = 0
	jmp		copy_src			; jump to function copy_src

copy_src:
	cmp		BYTE [rsi + rax], 0	; check if rsi[rax] == '\0'
	je		exit				; if rsi[rax] == '\0' | jump to function exit
	mov		cl, [rsi + rax]		; cl = rsi[rax] | copy rsi[rax] to cl
	mov 	[rdi + rax], cl		; rdi[rax] = cl | copy cl to rdi[rax]
	inc		rax					; rax = rax + 1
	jmp		copy_src			; jump to function copy_src

exit:
	mov		cl, 0				; cl = '\0' | copy '\0' in registre cl
	mov		[rdi + rax], cl		; rdi[rax] = cl 
	mov		rax, rdi			; rax contains the return value of the functions
	ret
