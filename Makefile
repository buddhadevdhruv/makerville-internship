all: db

db: main.o sample.o
	gcc main.o sample.o -o mkrv

main.o: main.c
	gcc -c main.c

sample.o: sample.c a.h
	gcc -c sample.c

run:
	mkrv.exe
	
clean:
	del *.o mkrv.exe