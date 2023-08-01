section .data
    hello_msg db 'Hello, Holberton', 0x0
    format db '%s', 0x0
section .text
    global main
extern printf
main:
; Call printf with the message
mov rdi, format
mov rsi, hello_msg
xor rax, rax ; Clear RAX register to indicate that there are no floating-point arguments
call printf
;
Exit the program
mov rdi, 0
call exit
