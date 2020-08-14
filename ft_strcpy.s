
global _ft_strcpy

_ft_strcpy:
		mov			rax, -1					; move -1 to rax as the index so that we can increment it in a loop, starts at 0

copy:
		inc			rax						; i++
		mov			cl, BYTE [rsi + rax]	; move the character at *rsi + index to cl, a temporary smaller register
		mov			BYTE[rdi + rax], cl		; move the character at cl to *rdi + index
		cmp			cl, 0					; check if we've reached the end of the string
		je			return					; if so, go to end of function
		jmp			copy					; else, go to top of the loop

return:
		mov			rax, rdi				; move the copied string to rax to return it
		ret