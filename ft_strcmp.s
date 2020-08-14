
global _ft_strcmp

_ft_strcmp:
		mov			rax, 0				; int ret = 0, this will be our return value

compare:
		mov			al, BYTE [rdi]		; al and cl are small 8-bit registers. Imagine this says char al = *s1 (or s1[0]): the byte at the current increment of rdi goes into al
		mov			cl, BYTE [rsi]		; same as the line above, char cl = *s2 (or s2[0]). al is the first byte of rax. cl is the first byte of rcx.
		cmp			al, 0				; compare s1[0] to \0
		je			return				; 'je' is similar to the '==' operand in C. if s1[0] is equal to \0 (je), then go to return section
		cmp			cl, 0				; compare s2[0] to \0
		je			return				; if s2[0] is equal to \0, go to return section
		cmp			al, cl				; compare s1[0] to s2[0]
		jne			return				; 'jne' is similar to the '!=' operand in C. if s1[0] is not equal to s2[0], go to return section
		inc			rdi					; otherwise, increment *s1...
		inc			rsi					; ...and increment *s2...
		jmp			compare				; ...and restart the sequence, this time comparing s1[1] to s2[1].

return:
		movzx		rax, al				; we use movzx to move the character in the 8-bit register al to a 64-bit register, rax, so that we can calculate with them.
		movzx		rcx, cl				; the same as above but for cl into a different 64-bit register
		cmp			rax, rcx
		je			retzero
		sub			rax, rcx			; subtract rcx from rax so we can get the difference, resulting in our return value
		ret

retzero:
		mov			rax, 0
		ret
