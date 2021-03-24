			section	.text
			global	_ft_strcmp

_ft_strcmp:
            xor dl, dl
            xor cl, cl
            xor rax, rax
            jmp main

main:
            mov dl, BYTE [rdi + rax]
            mov cl, BYTE [rsi + rax]
            cmp cl, dl
            jne end
            cmp cl, 0
            je  end
            cmp dl, 0
            je  end
            inc rax
            jmp main

end:
            xor al, al
            mov al, dl
            sub al, cl
            ret