# This Directory is for makefiles

```
# -*- Makefile -*-

all: school

school: main.o school.o
	gcc main.o school.o -o school

main.o: main.c
	gcc -c main.c
	
school.o: school.c
	gcc -c school.c
```

```
$ make
gcc main.c hello.c -o hello.o
