global _print

_print:
	mov	rax, 0x2000004
	syscall
	ret
