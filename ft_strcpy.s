
global _ft_strcpy

_ft_strcpy:
		mov			rax, -1

copy:	inc			rax
		mov			cl, BYTE [rsi + rax]
		mov			BYTE[rdi + rax], cl
		cmp			cl, 0
		je			return
		jmp			copy

return:
		mov			rax, rdi
		ret