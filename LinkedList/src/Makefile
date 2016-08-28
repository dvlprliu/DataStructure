TARGET=List
CC=gcc
CFLAGS=-I../include -g
OBJS=main.o List.o
SRCS=main.c List.c

${TARGET}: ${OBJS}
	${CC} ${CFLAGS} -o ${TARGET} ${OBJS}


main.o: main.c ../include/List.h

List.o: List.c ../include/List.h
