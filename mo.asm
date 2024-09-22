
section .text
    global funk_asm
    global print
    global tes
       

print:
    mov rcx, 0 
count_loop:
    mov al, [rdi + rcx] 
    inc rcx
    cmp al, 0
    jne count_loop
    dec rcx
    mov rsi, rdi
    mov rax, 1
    mov rdi, 1
    mov rdx, rcx
    syscall
    ret
        
funk_asm:
    mov rax, rdi
    add rax, rsi
    ret
