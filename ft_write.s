global _ft_write

; ft_write (rdi = [argv[0]] | rsi = [argv[1]] | rdx = [argv[2]])

_ft_write:
	mov	rax, 0x2000004	; mov sys_write in rax
 syscall				; call write
	jc	error_exit
	ret					; return len

error_exit:
	mov rax, -1,
	ret
