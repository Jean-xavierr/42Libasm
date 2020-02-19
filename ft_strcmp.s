global _ft_strcmp

_ft_strcmp:
		

loop_cmp:
	cmp		BYTE [rdi + r8], BYTE [rsi + r8]
	jne		exit

exit:
	sub 	BYTE [rdi + r8], BYTE [rsi + r8]
	
