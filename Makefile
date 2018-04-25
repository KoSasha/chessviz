all: bin/src bin/test

bin/src: build/main.o build/board.o build/board_print.o
	gcc -Wall -Werror build/main.o build/board.o build/board_print.o -o bin/src

build/main.o: main.c
	gcc -Wall -Werror -c main.c -o build/main.o

build/board.o: board.c
	gcc -Wall -Werror -c board.c -o build/board.o

build/board_print.o: board_print.c
	gcc -Wall -Werror -c board_print.c -o build/board_print.o

bin/test: build/test.o build/board.o build/board_print.o build/ctest.o
	gcc -Wall build/test.o build/board.o build/board_print.o build/ctest.o -o bin/test

build/test.o: test/test.c
	gcc -Wall -c test/test.c -o build/test.o -Ithirdparty -Isrc1

build/ctest.o: test/ctest.c
	gcc -Wall -c test/ctest.c -o build/ctest.o -Ithirdparty

test: bin/test
	bin/test

.PHONY: clean
clean:
	rm -rf build/*.o