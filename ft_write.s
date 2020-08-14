
global _ft_write

; int ft_write(int rdi, const void *rsi, size_t rdx) (rdi = fd, rsi = buffer, rdx = size)
_ft_write:
		test	rdi, rdi 			; test does a bitwise AND operation. In practice, this means the same as 'if (rdi == 0)' in C.
		je		write_size_zero		; if the fd is zero, return zero.
		cmp		rsi, 0				; check if the buffer is zero.
		je		error				; jump to error and return -1 if the buffer is zero.
		cmp		rdx, 0				; check if the amount of characters to be written is zero
		je		write_size_zero		; if so, so nothing and return zero.

		mov		rax, 0x2000004		; system call for write
		syscall
		ret

error:
		mov		rax, -1				; in case of error return -1
		ret

write_size_zero:
		mov		rax, 0				; in case of nothing to be written return 0
		ret
