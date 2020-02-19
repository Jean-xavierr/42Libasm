global _ft_strlen

_ft_strlen:
	mov		rax, 0		; init rax to 0
	jmp		loop_count  ; jump to count function

loop_count:
	cmp		BYTE [rdi + rax], 0 ;
	je		exit				; je = (rdi[rax] == 0) -> exit 
	inc		rax					; rax <- rax + 1
	jmp		loop_count			; jump count

exit:
	ret							; return rax
