chessviz: build/chessviz.o build/moves.o
	gcc -o chessviz build/moves.o build/chessviz.o

build/chessviz.o: src/chessviz.c
	gcc -c -o build/chessviz.o src/chessviz.c

build/moves.o: src/moves.c
	gcc -c -o build/moves.o src/moves.c
