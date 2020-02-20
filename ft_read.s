global _ft_read

_ft_read:
	mov rax, 0x2000003 	; mov sys_read in rax
 syscall				; call read
	jc	error_exit
	ret					; return rax (len red)

error_exit:
	mov rax, -1
	ret
