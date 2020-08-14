extern _ft_strlen
extern _ft_strcpy
extern _malloc

global _ft_strdup

_ft_strdup:
		push rdi         ; save rdi because it will be overwrite for malloc
		call _ft_strlen  ; rdi is still == str
		inc  rax          ; len++ for '\0'
		mov  rdi, rax     ; size to malloc
		call _malloc
		cmp  rax, 0
		je   error
		pop  rsi          ; original str as src
		mov  rdi, rax     ; allocated as dest
		call _ft_strcpy
		ret

error:
		pop  rdi
		ret