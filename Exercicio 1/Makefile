.DEFAULT_GOAL := all

NAME=Formas

ifeq ($(OS),Windows_NT)

# Nome do projeto
PROJ_NAME=$(NAME).exe

# Criação de uma pasta para guardar os arquivos .o
objFolder:
	@ if not exist objects mkdir objects

run: all
	@ echo "Executando o arquivo gerado: $(PROJ_NAME)"
	@ echo ''
	@ $(PROJ_NAME)

clean:
	@ del /Q $(PROJ_NAME)
	@ rmdir /S /Q objects

else

     UNAME_S := $(shell uname -s)

     ifeq ($(UNAME_S),Linux)

# Nome do projeto
PROJ_NAME=$(NAME).run

# Criação de uma pasta para guardar os arquivos .o
objFolder:
	@ mkdir -p objects

# Executa o arquivo gerado
run: all
	@ echo "Executando o arquivo gerado: $(PROJ_NAME)"
	@ echo ''
	@ ./$(PROJ_NAME)

clean:
	@ rm -rf objects $(PROJ_NAME) *~

     endif

endif

#-------------------------------------------------------------------------------------------------------#
## Definições globais

# Arquivos .cpp
C_SOURCE=$(wildcard ./source/*.cpp)

# Arquivos .h
H_SOURCE=$(wildcard ./source/*.h)

# Arquivos .o
OBJ=$(subst .cpp,.o,$(subst source,objects,$(C_SOURCE)))

# Compilador / linker
CC=g++

# Flags para o compilador
CC_FLAGS=-c -s -w -O2

# Compilação e linkedição
all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	@ echo "Gerando binarios utilizando o $(CC) ..."
	@ $(CC) $^ -o $@
	@ echo ''
	@ echo "Criacao de binarios finalizada! Arquivo executavel gerado:"
	@ echo "-->" $@
	@ echo ''

./objects/%.o: ./source/%.cpp ./source/%.h
	@ echo "Linkando o arquivo alvo utilizando o $(CC):" $<
	@ $(CC) $< $(CC_FLAGS) -o $@

./objects/main.o: ./source/main.cpp $(H_SOURCE)
	@ echo "Linkando o arquivo main utilizando o $(CC):" $<
	@ $(CC) $< $(CC_FLAGS) -o $@

./objects/Main.o: ./source/Main.cpp $(H_SOURCE)
	@ echo "Linkando o arquivo main utilizando o $(CC):" $<
	@ $(CC) $< $(CC_FLAGS) -o $@

# Palavras declaradas como "alvo falso"
.PHONY: all clean
