section .data
    hello_msg db 'Hello, World' 0xA ; Message to print

section .text
    global _start

_start:

    mov rax, 1             ; syscall number for write
    mov rdi, 1             ; file descriptor 1 (stdout)
    mov rsi, hello_msg     ; address of the message
    mov rdx, 13            ; length of the message

    syscall		   ; Invoke the kernel

    mov rax, 60            ; syscall number for exit
    xor rdi, rdi           ; exit code 0
    syscall

