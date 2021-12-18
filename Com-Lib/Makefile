CC = g++ 
CF = -Wall -Wextra -g -c
LF = 
RES = common-lib.a
DOTO = common-lib.o


common-lib.a: common-lib.o
	ar rcs common-lib.a common-lib.o

common-lib.o: common-lib.cpp
	${CC} ${CF} common-lib.cpp -o common-lib.o


<<<<<<< HEAD
.PHONY: clean

clean:
	rm ${RES} ${DOTO}
=======
.PHONY:clean

clean:
	rm common-lib.o common-lib.hppo common-lib.a
>>>>>>> refs/remotes/origin/main
