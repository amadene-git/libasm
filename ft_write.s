
%define ERRNO __errno_location
%define CALL_HELPER wrt ..plt

section	.text		
global	ft_write
extern	ERRNO


;
ft_write:
		mov rax, 1;
		syscall;
		je ret_error;
		ret;

ret_error:
		neg rax
		push rax;
		call ERRNO CALL_HELPER;
		pop qword[rax];
		mov rax, -1
		ret
