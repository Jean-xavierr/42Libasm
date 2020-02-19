global _ft_strlen

_ft_strlen:
	xor		eax, eax 	; Could use "mov rax, 0" easier to understand but takes more memory (rax is the return value of the assembler program)
	jmp		loop_count  ; jump to count function

loop_count:
	cmp		BYTE [rdi + rax], 0 ;
	je		exit				; je = (rdi[rax] == 0) -> exit 
	inc		rax					; rax <- rax + 1
	jmp		loop_count			; jump count

exit:
	ret							; return rax
