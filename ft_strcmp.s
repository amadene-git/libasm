			section	.text
			global	ft_strcmp

ft_strcmp:
            xor rdx, rdx
            xor rcx, rcx
            xor rax, rax
            jmp main

main:
            mov dl, BYTE [rdi + rax]
            mov cl, BYTE [rsi + rax]
            cmp ecx, edx
            jne end
            cmp ecx, 0
            je  end
            cmp edx, 0
            je  end
            inc rax
            jmp main

end:
            xor rax, rax
            mov eax, edx
            sub eax, ecx
            ret
