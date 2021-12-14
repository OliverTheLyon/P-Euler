CC = gcc 
CF = -Wall -Wextra -I ../../Com-Lib -c
LF = -L ../../Com-Lib/ -l:common-lib.a ../../Com-Lib/common-lib.o
EXE = p3
DOTO = problem3.o


all: common-lib.a problem3.o 
	${CC} ${LF} problem3.o -o p3

problem3.o: problem3.cpp
	${CC} ${CF} problem3.cpp -o problem3.o

common-lib.a: ../../Com-Lib/common-lib.cpp
	make -C ../../Com-Lib/

.PHONY: clean

clean:
	rm ${EXE} ${DOTO}
