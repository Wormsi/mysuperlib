NAME=test_lib
CC=gcc
SRC=src/mystrlen.c tests/main.c src/myputchar.c src/myputstr.c src/mystrnew.c src/mystrdup.c
all:
	$(CC) $(SRC) -o $(NAME)
test: all
	./$(NAME)
