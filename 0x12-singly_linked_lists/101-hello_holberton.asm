section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main

    extern printf

main:
    ; Set up the stack frame for calling printf
    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Clean up and exit
    add rsp, 8
    mov rax, 60         ; syscall number for exit (60)
    xor rdi, rdi        ; status code (0)
    syscall

