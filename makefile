all: clear clean compile run

clear:
	@clear


clean:
	@rm -rf a.out binary_tree.o main.o

compile: binary_tree.o main.o
	@gcc binary_tree.o main.o


run:
	@./a.out

main.o: main.c
	@gcc -c main.c


binary_tree.o: binary_tree.c
	@gcc -c binary_tree.c


