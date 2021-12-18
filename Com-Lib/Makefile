CC = g++ 
CF = -Wall -Wextra -g -c
LF = 
RES = common-lib.a
DOTO = common-lib.o


common-lib.a: common-lib.o
	ar rcs common-lib.a common-lib.o

common-lib.o: common-lib.cpp
	${CC} ${CF} common-lib.cpp -o common-lib.o


.PHONY:clean

clean:
	rm ${RES} ${DOTO}

