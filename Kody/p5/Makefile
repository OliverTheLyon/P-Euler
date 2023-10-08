CC = g++ 
CF = -Wall -Wextra  -c -I ../../Com-Lib -g
LF = -L ../../Com-Lib/ -l:common-lib.a ../../Com-Lib/common-lib.o
RES = a.out
DOTO = problem5.o


all: common-lib.a problem5.o 
	${CC} ${LF} problem5.o 

problem5.o: problem5.cpp
	${CC} ${CF} problem5.cpp -o problem5.o

common-lib.a: ../../Com-Lib/common-lib.cpp
	make -C ../../Com-Lib/

.PHONY: clean

clean:
	rm ${RES} ${DOTO}
