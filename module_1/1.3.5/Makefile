all: exe

exe: solution.c
	gcc -Wl,-rpath=.  solution.c -ldl -fPIC -o solution

clean:
	-rm solution libShared.so 2>/dev/null

