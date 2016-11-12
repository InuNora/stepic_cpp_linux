all: exe lib

exe: main.c hello.h lib
	gcc main.c -L. -lHello -o hello
lib: hello.h hello.c
	gcc -shared hello.c -o libHello.so

clean:
	-rm hello libHello.so 2>/dev/null

