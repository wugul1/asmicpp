main:	main.o mo.o
	
	g++ main.o mo.o -o main && ./main

main.o: main.cpp
	g++ -c main.cpp -o main.o

mo.o: mo.asm
	nasm -f elf64 mo.asm -o mo.o 
clean:
	rm -f *.o main