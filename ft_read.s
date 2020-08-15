extern ___error

global _ft_read

_ft_read:                       ; ft_read(rdi, rsi, rdx) or ft_read(int fd, void *buf, size_t count)
        mov     rax, 0x2000003  ; 0x2000003 is the system call for read
        syscall                 ; call read
        jc      _set_errno      ; if there is an error, go to error handling
        ret                     ; otherwise return amount of bytes read

_set_errno:
	mov	rdi, rax	; set errno in rdi
	push	rdi		; push value of rdi on stack
	call	___error	; get memory address of errno in rax
	pop	rdi		; pop value of rdi off stack
	mov	[rax], rdi	; set errno in rax
	mov	rax, -1		; set rax to -1
	ret			; return rax
