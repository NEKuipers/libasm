
section .text
		global _ft_strlen

_ft_strlen:
		mov			rax, -1				; int i = -1
increment:
		inc			rax					; i++;
		cmp			BYTE [rdi + rax], 0	; rdi is the input string. this line compares the byte at the input string + rax to 0 (which is \0 in asm). 
		jne			increment			; jne is similar to != in C. If (*rdi) + rax != '\0', go back to the start of the increment section.
exit:
		ret								; otherwise, return rax.

