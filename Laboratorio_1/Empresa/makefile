CC = g++
OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG = $(BIN)/empresa

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/funcionario.o $(OBJ)/empresa.o $(OBJ)/main_empresa.o

all: mkdirs $(PROG)	

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/funcionario.o: $(SRC)/funcionario.cpp $(INC)/funcionario.h 
	#Divisao de arquivos do funcionario
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $(OBJ)/funcionario.o 
	#Compulacao de arquivos .cpp e .o do funcionario

$(OBJ)/empresa.o: $(SRC)/empresa.cpp $(INC)/empresa.h $(OBJ)/funcionario.o
	#Divisao de arquivos do JOGADOR
	$(CC) $(CPPFLAGS) -c $(SRC)/empresa.cpp -o $(OBJ)/empresa.o 
	#Compulacao de arquivos .cpp e .o da empresa

$(OBJ)/main_empresa.o: $(SRC)/main_empresa.cpp $(OBJ)/funcionario.o $(OBJ)/empresa.o
	#Divisao de arquivos do MAIN
	$(CC) $(CPPFLAGS) -c $(SRC)/main_empresa.cpp -o $(OBJ)/main_empresa.o 
	#Compulacao de arquivos .cpp e .o do MAIN


clean:
	rm -f $(PROG)/*
	rm -f $(OBJS)/*
