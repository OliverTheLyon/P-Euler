CC = g++ 
CF = -Wall -Wextra  -c -I ../../Com-Lib -g
LF = -L ../../Com-Lib/ -l:common-lib.a ../../Com-Lib/common-lib.o
RES = a.out
DOTO = problem3.o


all: common-lib.a problem3.o 
	${CC} ${LF} problem3.o 

problem3.o: problem3.cpp
	${CC} ${CF} problem3.cpp -o problem3.o

common-lib.a: ../../Com-Lib/common-lib.cpp
	make -C ../../Com-Lib/

.PHONY: clean

clean:
	rm ${RES} ${DOTO}
