section .data
    hello db "Hello, Holberton", 0Ah, 00h  ; string to print, with newline and null terminator

section.text; Code section.

global main; standard gcc point

main:; program label for entry point
push rbp ; set up stack frame, must allign

mov rdi, fmt
mov rsi,msg
mov rax, 0; or can be xor rax, rax
call printf; Call C function

pop rbp;restore stack frame

mov rax 0; normal, no error, return value
ret; return
