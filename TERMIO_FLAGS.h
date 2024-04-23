%ifndef TERMIO_FLAGS
%define TERMIO_FLAGS 1

;Input (iflag) Flags
%define IFLAG_IGNBRK    0x00000001   ; Ignore break condition
%define IFLAG_BRKINT    0x00000002   ; Signal interrupt on break
%define IFLAG_IGNPAR    0x00000004   ; Ignore parity errors
%define IFLAG_PARMRK    0x00000008   ; Mark parity errors
%define IFLAG_INPCK     0x00000010   ; Enable input parity checking
%define IFLAG_ISTRIP    0x00000020   ; Strip high bit
%define IFLAG_INLCR     0x00000040   ; Map NL to CR
%define IFLAG_IGNCR     0x00000080   ; Ignore CR
%define IFLAG_ICRNL     0x00000100   ; Map CR to NL
%define IFLAG_IUCLC     0x00000200   ; Translate uppercase to lowercase
%define IFLAG_IXON      0x00000400   ; Enable start/stop output control
%define IFLAG_IXANY     0x00000800   ; Enable any character to restart output
%define IFLAG_IXOFF     0x00001000   ; Enable start/stop input control
%define IFLAG_IMAXBEL   0x00002000   ; Ring bell when input buffer is full

;Output (oflag) Flags
%define OFLAG_OPOST     0x00000001   ; Enable post-processing of output
%define OFLAG_OLCUC     0x00000002   ; Translate lowercase to uppercase
%define OFLAG_ONLCR     0x00000004   ; Map NL to CR-NL
%define OFLAG_OCRNL     0x00000008   ; Map CR to NL
%define OFLAG_ONOCR     0x00000010   ; No CR output at column 0
%define OFLAG_ONLRET    0x00000020   ; No CR output at column 0
%define OFLAG_OFILL     0x00000040   ; Use fill characters for delay
%define OFLAG_OFDEL     0x00000080   ; Fill is ASCII DEL (0177)

;Control (cflag) Flags
%define CFLAG_CBAUD     0x0000100F   ; Mask for baud rate
%define CFLAG_B0        0x00000000   ; Hang up
%define CFLAG_B50       0x00000001   ; 50 baud
%define CFLAG_B75       0x00000002   ; 75 baud
%define CFLAG_B110      0x00000003   ; 110 baud
%define CFLAG_B134      0x00000004   ; 134.5 baud
%define CFLAG_B150      0x00000005   ; 150 baud
%define CFLAG_B200      0x00000006   ; 200 baud
%define CFLAG_B300      0x00000007   ; 300 baud
%define CFLAG_B600      0x00000008   ; 600 baud
%define CFLAG_B1200     0x00000009   ; 1200 baud
%define CFLAG_B1800     0x0000000A   ; 1800 baud
%define CFLAG_B2400     0x0000000B   ; 2400 baud
%define CFLAG_B4800     0x0000000C   ; 4800 baud
%define CFLAG_B9600     0x0000000D   ; 9600 baud
%define CFLAG_B19200    0x0000000E   ; 19200 baud
%define CFLAG_B38400    0x0000000F   ; 38400 baud
%define CFLAG_CSIZE     0x00000300   ; Mask for character size
%define CFLAG_CS5       0x00000000   ; 5 bits
%define CFLAG_CS6       0x00000100   ; 6 bits
%define CFLAG_CS7       0x00000200   ; 7 bits
%define CFLAG_CS8       0x00000300   ; 8 bits
%define CFLAG_CSTOPB    0x00000400   ; Two stop bits, else one
%define CFLAG_CREAD     0x00000800   ; Enable receiver
%define CFLAG_PARENB    0x00001000   ; Enable parity generation and checking
%define CFLAG_PARODD    0x00002000   ; Odd parity, else even
%define CFLAG_HUPCL     0x00004000   ; Hang up on last close
%define CFLAG_CLOCAL    0x00008000   ; Ignore modem status lines

;Local (lflag) Flags
%define LFLAG_ECHOKE    0x00000001   ; Visual erase for line kill
%define LFLAG_ECHOE     0x00000002   ; Visual erase for backspace
%define LFLAG_ECHOK     0x00000004   ; Echo NL after kill character
%define LFLAG_ECHO      0x00000008   ; Enable echoing of input
%define LFLAG_ECHONL    0x00000010   ; Echo NL even if not echoing other characters
%define LFLAG_ECHOPRT   0x00000020   ; Echo erased characters as backspace-space-backspace
%define LFLAG_ECHOCTL   0x00000040   ; Echo control characters as ^X
%define LFLAG_ISIG      0x00000080   ; Enable signals
%define LFLAG_ICANON    0x00000100   ; Canonical input (erase and kill processing)
%define LFLAG_ALTWERASE 0x00000200   ; Use alternate WERASE algorithm
%define LFLAG_IEXTEN    0x00000400   ; Enable non-POSIX special characters
%define LFLAG_EXTPROC   0x00000800   ; Enable external processing
%define LFLAG_TOSTOP    0x00400000   ; Send SIGTTOU for background output
%define LFLAG_FLUSHO    0x00800000   ; Output being flushed (state)
%define LFLAG_NOKERNINFO 0x02000000  ; Don't tell kernel too much
%define LFLAG_PENDIN    0x20000000   ; Retype pending input (state)
%define LFLAG_NOFLSH    0x80000000   ; Disable flushing of input buffers after interrupt

%endif ;TERMIO_FLAGS