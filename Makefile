SRC = $(wildcard *.c)
EXE = $(SRC:.c=)
CFLAGS = -Wall -Wextra -g

all: $(EXE)

clean:
	rm -rf $(EXE)

