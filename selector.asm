;Includes
%INCLUDE "Headers/TERMIO_FLAGS.h"

;I/O
%DEFINE SYS_READ 0
%DEFINE STDIN 0
%DEFINE SYS_WRITE 1
%DEFINE STDOUT 1
;Files
%DEFINE SYS_OPEN 2
    ;Flags
    %DEFINE RDWR 0x0002
    ;Mode
    %DEFINE S_IWUSR 0x80
    %DEFINE S_IRGRP 0x20
    %DEFINE S_IROTH 0x04
%DEFINE SYS_CLOSE 3
%DEFINE SYS_STAT 4
%DEFINE SYS_GETDENTS64 217
;Memory
%DEFINE SYS_MMAP 9
    ;Protection
    %DEFINE PROT_READ 0x1
    %DEFINE PROT_WRITE 0x2
    ;Flags
    %DEFINE MAP_SHARED 0x01
    %DEFINE MAP_ANONYMOUS 0x20
%DEFINE SYS_MPROTECT 10 ;Uses sys_mmap protections
%DEFINE SYS_MUNMAP 11
%DEFINE SYS_BRK 12
;Terminal
%DEFINE SYS_RT_SIGACTION 13
%DEFINE SYS_IOCTL 16
    ;Settings
    %DEFINE TCGETS 0x5401 ;Get terminal attributes
    %DEFINE TCSETS 0x5402 ;Set terminal attributes
    %DEFINE TIOCGWINSZ 0x5413 ;Get window size of terminal
    %DEFINE TIOCSWINSZ 0x5414 ;Set window size of terminal
    %DEFINE TIOCGATTR 0x4028743A ;Get terminal attributes 
    %DEFINE TIOCSATTR 0x80287439 ;Set terminal attributes 
;Multithreading
%DEFINE SYS_GETPID 39
%DEFINE SYS_CLONE 56
%DEFINE SYS_FORK 57
%DEFINE SYS_EXECVE 59
%DEFINE SYS_KILL 62
%DEFINE SYS_FUTEX 202
%DEFINE SYS_WAITID
;Exit
%DEFINE SYS_EXIT 60



section .rodata
;Prints



;Terminal
terminal_menu:
    .c_iflag dd IFLAG_IGNBRK 
    .c_oflag dd 0
    .c_cflag dd CFLAG_CREAD
    .c_lflag dd LFLAG_ECHOE
    .c_cc db 3,28,127,21,4,0,0,17,19,26,25,18,15,23,22,0


section .data
;Terminal
initial_termios:
    .c_iflag dd 0
    .c_oflag dd 0
    .c_cflag dd 0
    .c_lflag dd 0
    .c_cc db 3,28,127,21,4,0,0,17,19,26,25,18,15,23,22,0
    
winsize:
    .ws_row dw 0
    .ws_col dw 0
    .ws_xpixel dw 0
    .ws_ypixel dw 0
;game_variables
  

section .bss
command_buffer resb 2^16

section .text
strlen:
    ;RAX = return, RCX = counter, RDI = pointer to string.
    XOR RCX, RCX
    .compare:
        CMP BYTE [RDI + RCX], 0
        JE .return
        INC RCX
        JMP .compare
    
    .return:
        MOV RAX, RCX
        RET
        
global _start
_start:
    
    
    MOV RAX, SYS_EXIT
    XOR RDI, RDI
    SYSCALL

