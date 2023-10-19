section .data
	hello db 'Hello, Holberton', 10 ; 10 is character for newline
section .text
global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, 17 ; determing the length of the string
	syscall

	mov rax, 60
	xor rdi, rdi ; exit code 0
	syscall

	