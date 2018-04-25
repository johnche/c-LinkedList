all: clean build

build: main

main: linked_list.o

test:
	valgrind --leak-check=yes ./main

clean:
	rm -f *.o
