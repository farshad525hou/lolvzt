CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
all : PartA PartB PartC

PartA : ./parta/pa.o
	$(CC) ./parta/pa.o -o PartA

pa.o : ./parta/pa.c
	$(CC) -c ./parta/pa.c

PartB : ./partb/pb.o
	$(CC) ./partb/pb.o -o PartB

pb.o :  ./partb/pb.c
	$(CC) -c ./partb/pb.c

PartC : ./partc/pc.o
	$(CC) ./partc/pc.o -o PartC 

pc.o : ./partc/pc.c
	$(CC) -c ./partc/pc.c
 



	
clean:	
	/rm *.o *~ Run
