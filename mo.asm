
section .text
    global funk_asm
    global print
    
print:

    mov rcx, 0 ; rejesrt na dlugosc
    
count_loop:
    mov al, [rdi + rcx] ; adres lancucha + dlugosc
    inc rcx
    cmp al, 0
    jne count_loop

    mov rsi, rdi
    mov rax, 1
    mov rdi, 1
    mov rdx, rcx ; prawdziwa dlugosc
    syscall
    ret


funk_asm:
    mov rax, rdi
    add rax, rsi
ret