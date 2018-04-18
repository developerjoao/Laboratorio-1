CC=g++

.PHONY: all clear makefile 

INCLUDE=./include
SRC=./src
BIN=./bin
BUILD=./build


FLAGS = -Wall -pedantic -std=c++11
<<<<<<< HEAD
all: bin/q2 build/main.o build/jogador.o build/jogo.o


bin/q2: build/jogo.o build/jogador.o build/main.o
=======
all: bin/q2 build/main.o build/jogador.o


bin/q1: build/jogador.o build/main.o
>>>>>>> 2c4322dc7c64adbac0110d657b5e3dc46765ea59
	$(CC) $^ -o $@


build/main.o : src/main.cpp
	g++ $^ -c -I include -o $@ $(FLAGS)

<<<<<<< HEAD
build/jogador.o : src/jogador.cpp
	g++ $^ -c -I include -o $@ $(FLAGS)

build/jogo.o : src/jogo.cpp
	g++ $^ -c -I include -o $@ $(FLAGS)
=======
build/funcionario.o : src/jogador.cpp
	g++ $^ -c -I include -o $@ $(FLAGS)

>>>>>>> 2c4322dc7c64adbac0110d657b5e3dc46765ea59
clean:
	rm build/*.o

run:
	bin/q2