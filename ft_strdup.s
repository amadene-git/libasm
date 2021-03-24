section .text
global	ft_strdup
extern	__errno_location
extern	malloc
extern	ft_strlen


ft_strdup:
		call ft_strlen
		push rdi
		mov rdi, rax
		call malloc
		mov rcx, rax
		pop qword[rax]
		
