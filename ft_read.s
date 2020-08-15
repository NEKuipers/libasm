
global _ft_read

_ft_read:                       ; ft_read(rdi, rsi, rdx) or ft_read(int fd, void *buf, size_t count)
        mov     rax, 0x2000003  ; 0x2000003 is the system call for read
        syscall                 ; call read
        jc      error           ; if there is an error, go to error handling
        ret                     ; otherwise return amount of bytes read

error: 
        mov     rax, -1         ; return -1
        ret                     