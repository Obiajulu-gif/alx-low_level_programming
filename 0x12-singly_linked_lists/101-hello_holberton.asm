section .data
    hello db 'Hello, Holberton',10,0 ; null-terminated string to be printed

section .text
    extern printf             ; Declare printf as an external function

    global main
main:
    ; Prepare arguments for printf
    mov     rdi, hello       ; Load the address of hello into rdi
    call    printf           ; Call printf
    ; Exit the program
    mov     rax, 60          ; syscall: exit
    xor     rdi, rdi         ; status: 0
    syscall
