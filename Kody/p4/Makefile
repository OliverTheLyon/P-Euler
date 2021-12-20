CC = g++ 
CF = -Wall -Wextra  -c -I ../../Com-Lib -g
LF = -L ../../Com-Lib/ -l:common-lib.a ../../Com-Lib/common-lib.o
RES = a.out
DOTO = problem4.o


all: common-lib.a problem4.o 
	${CC} ${LF} problem4.o 

problem4.o: problem4.cpp
	${CC} ${CF} problem4.cpp -o problem4.o

common-lib.a: ../../Com-Lib/common-lib.cpp
	make -C ../../Com-Lib/

.PHONY: clean

clean:
	rm ${RES} ${DOTO}
