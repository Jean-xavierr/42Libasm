global _ft_write

; ft_write (rdi = [argv[0]] | rsi = [argv[1]] | rdx = [argv[2]])

_ft_write:
	mov	r8, rdx			; r8 <- rdx mov rdx in r8 for save len of the word
	mov	rax, 0x2000004	; mov sys_write in rax
 syscall				; call write
	mov rax, r8			; rax <- r8 mov len of the word print
	ret					; return len
