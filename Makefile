all: src

src: build/main.o build/board.o build/board_print.o
	gcc -Wall -Werror build/main.o build/board.o build/board_print.o -o src

build/main.o: main.c
	gcc -Wall -Werror -c main.c -o build/main.o

build/board.o: board.c
	gcc -Wall -Werror -c board.c -o build/board.o

build/board_print.o: board_print.c
	gcc -Wall -Werror -c board_print.c -o build/board_print.o

.PHONY: clean
clean:
	rm -rf build/*.o