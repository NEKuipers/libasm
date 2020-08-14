extern _ft_strlen
extern _ft_strcpy
extern _malloc

global _ft_strdup

_ft_strdup:
		push rdi			; rdi is the parameter string. push so that we can remember the content
		call _ft_strlen		; we can now call strlen to figure out the length, return value goes to rax
		inc  rax			; add one to len for the terminating character
		mov  rdi, rax		; pass the size to malloc on
		call _malloc		; call malloc
		cmp  rax, 0			; malloc protect: if malloc returns 0, go to error
		je   error			
		pop  rsi			; get the parameter string back and place it in rsi 
		mov  rdi, rax		; get the malloced destination string and place it in rdi
		call _ft_strcpy		; ft_strcpy is called on (rsi, rdi)
		ret					; return the string

error:
		pop  rdi			; in case of error get the pushed string back and end function
		ret