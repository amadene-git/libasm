			section	.text
			global	ft_strcpy

ft_strcpy:
            xor rax, rax                            ; i = 0
            jmp main       
            
main:            
            mov dl, BYTE [rsi + rax] ; dest[i] = src[i] 

            mov BYTE [rdi + rax], dl ; dest[i] = src[i] 
            cmp BYTE [rsi + rax], 0                 ; src + i == 0 
            je  end                                 ; if yes -> return (dest)
            inc rax                                 ; i++
            jmp main                                ; while


end:
            mov rax, rdi
            ret
