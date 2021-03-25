section .text
global	ft_strdup
extern	__errno_location
extern	malloc
extern	ft_strlen
extern	ft_strcpy

ft_strdup:
		call ft_strlen
		push rdi
		mov  rdi, rax
		call malloc
		mov  rdi, rax
		pop  qword[rsi]
		call ft_strcpy
		ret
		
