
global _ft_read

_ft_read:                       ; ft_read(rdi, rsi, rdx) or ft_read(int fd, void *buf, size_t count)
        cmp     
        mov     rax, 0x2000003  ; 0x2000003 is the system call for read
        syscall                 ; call read
        ret