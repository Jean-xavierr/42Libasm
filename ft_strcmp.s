global _ft_strcmp

_ft_strcmp:
	jmp		loop_cmp	

loop_cmp:
	mov		al, BYTE [rdi]  ; al <- rdi[0] move first byte of rdi in al (al registe 1 BYTE)
	mov		bl, BYTE [rsi]	; bl <- rdi[0] move first byte of rdi in bl (bl registe 1 BYTE)
	cmp		al, 0			; chek if we are at the end of the character chain (rdi argv[0])
	je		exit			; if is end of rdi go to function exit
	cmp		bl, 0			
	je		exit
	cmp		al, bl
	jne		exit
	inc		rdi
	inc		rsi
	jmp		loop_cmp

exit:
	movzx	rax, al
	movzx	r8, bl
	sub		rax, r8
	ret
	
