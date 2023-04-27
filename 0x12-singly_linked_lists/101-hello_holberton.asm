section .data
message db "Hello, Holberton", 0Ah, 0
section .text
global main
main:
char *str = "Hello"
char *str1 = "Holberton"
printf("%s, %s", str, str1);
mov rdi, message
xor rax, rax
call printf
xor eax, eax
ret
