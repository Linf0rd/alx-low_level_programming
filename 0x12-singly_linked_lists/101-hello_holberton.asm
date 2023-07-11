section .data
	hello db "Hello, Holberton", 10
	len equ $-hello

section .text
	global asm_main

asm_main:
	mov rax, 1	; Set rax to 1 for sys_write
	mov rdi, 1	; set rdi to 1 for standard output
	mov rsi, hello	; Set rsi to the address of the hello string
	mov rdx, len	; Set rdx to the length of the string	
	syscall

	mov rax, 60	; Set rax to 60 for sys_exit
	xor rdi, rdi	; Set rdi to 0 for exit status
	syscall
