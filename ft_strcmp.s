global _ft_strcmp

_ft_strcmp:
	mov		al, BYTE [rdi]  ; al <- rdi[0] move first byte of rdi in al (al registe 1 BYTE)
	mov		bl, BYTE [rsi]	; bl <- rdi[0] move first byte of rdi in bl (bl registe 1 BYTE)
	cmp		al, 0			; chek if we are at the end of the character chain (rdi argv[0])
	je		exit			; if is end of rdi go to function exit
	cmp		bl, 0			
	je		exit
	cmp		al, bl			; compare al with bl
	jne		exit			; jump if no equal (al != bl) to function exit
	inc		rdi				; rdi++
	inc		rsi				; rsi++
	jmp		_ft_strcmp	

exit:
	movzx	rax, al			; movzx add extension with 0 to dest
	movzx	r8, bl
	sub		rax, r8			; rax = rax - r8
	ret
	
