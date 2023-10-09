CC = g++ 
CF = -Wall -Wextra  -c -I ../../Com-Lib -g
LF = -L ../../Com-Lib/ -l:common-lib.a ../../Com-Lib/common-lib.o
RES = a.out
DOTO = problem6.o


all: common-lib.a problem6.o 
	${CC} ${LF} problem6.o 

problem6.o: problem6.cpp
	${CC} ${CF} problem6.cpp -o problem6.o

common-lib.a: ../../Com-Lib/common-lib.cpp
	make -C ../../Com-Lib/

.PHONY: clean

clean:
	rm ${RES} ${DOTO}
