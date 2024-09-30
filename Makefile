CC = clang

BIN = clox

PREFIX_DIR = ./src
SRC = $(PREFIX_DIR)/chunk.c \
	$(PREFIX_DIR)/memory.c \
	$(PREFIX_DIR)/debug.c \
	$(PREFIX_DIR)/value.c \
	$(PREFIX_DIR)/line.c \
	$(PREFIX_DIR)/vm.c \
	$(PREFIX_DIR)/scanner.c \
	$(PREFIX_DIR)/compiler.c \
	$(PREFIX_DIR)/object.c \
	$(PREFIX_DIR)/table.c \
	$(PREFIX_DIR)/main.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -g

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) \
		$(OBJ) \
		$(BIN)

re: fclean all

.PHONY: \
	all \
	clean \
	fclean \
	re
