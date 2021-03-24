section .text
global	ft_read
extern	__errno_location

ft_read:
	mov rax, 0
	syscall
	je  ret_error
	ret
ret_error:
	neg  rax
	push rax
	call __errno_location wrt ..plt
	pop  qword [rax]
	mov  rax, -1
	ret
