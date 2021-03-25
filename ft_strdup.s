section .text
global	ft_strdup
extern	__errno_location
extern	malloc
extern	ft_strlen
extern	ft_strcpy

ft_strdup:
		push rbx
		mov  rbx, rdi
		call ft_strlen
		
		mov  rdi, 0
		mov  rdi, rax
		inc  rdi
		
		call malloc
		cmp  rax, 0
		je   end
		
		mov  rdi, rax
		mov  rsi, rbx
		call ft_strcpy
		
		jmp  end
end:
		pop rbx
		ret
