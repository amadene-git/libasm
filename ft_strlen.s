
			section	.text
			global	ft_strlen

ft_strlen:
			xor		rax, rax
			cmp		BYTE [rdi], 0
			jz		end
			jmp		while
while:
			inc		rax
			cmp		BYTE [rdi + rax], 0
			jne		while
			jmp		end
end:
			ret

