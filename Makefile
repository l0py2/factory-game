SRC := main.c
OBJ := ${SRC:.c=.o}
OUT := main
CFLAGS := -Wall -Werror
LDLIBS = `pkg-config --libs raylib`

all: ${OUT}

clean:
	@rm -f %.o

${OUT}: ${OBJ}
	${CC} ${LDLIBS} -o $@ $^

.PHONY: all clean
