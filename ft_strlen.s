
global _ft_strlen

_ft_strlen:
		mov			rax, -1				; rax is normally the return value in asm. we're initializing it with value -1, in C this would be int i = -1
increment:
		inc			rax					; i++;
		cmp			BYTE [rdi + rax], 0	; rdi is the input string. this line compares the byte at the input string + rax to 0 (which is \0 in asm). 
		jne			increment			; jne or Jump if Not Equal is similar to != in C. If (*rdi) + rax != '\0', go back to the start of the increment section.
exit:
		ret								; otherwise, return rax.

