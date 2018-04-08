chessviz: chessviz.o moves.o
	gcc -o chessviz moves.o chessviz.o

chessviz.o: chessviz.c
	gcc -c -o chessviz.o chessviz.c

moves.o: moves.c
	gcc -c -o moves.o moves.c
