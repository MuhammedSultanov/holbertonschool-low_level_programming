section .data
    hello_msg db 'Hello, World!', 10  ; Message to print
    hello_len equ $ - hello_msg        ; Length of the message

section .text
    global _start

_start:

    mov rax, 1             ; syscall number for write
    mov rdi, 1             ; file descriptor 1 (stdout)
    mov rsi, hello_msg     ; address of the message
    mov rdx, hello_len     ; length of the message

    syscall

    mov rax, 60            ; syscall number for exit
    xor rdi, rdi           ; exit code 0
    syscall

