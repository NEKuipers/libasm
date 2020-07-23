section .text:
		global _ft_write

; int ft_write(int rdi, const void *rsi, size_t rdx) (rdi = fd, rsi = buffer, rdx = size)
_ft_write:
		test	rdi, rdi 			; test does a bitwise AND operation. In practice, this means the same as 'if (rdi == 0)' in C.
		je		write_size_zero		; if the fd is zero, 
		cmp		rsi, 0
		je		error
		cmp		rdx, 0
		je		error

		mov		rax, 0x20000004
		syscall
		ret

error:
		mov		rax, -1
		ret

write_size_zero:
		mov		rax, 0
		ret
