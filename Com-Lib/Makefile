CC = gcc 
CF = -Wall -Wextra -c
LF = 


common-lib.a: common-lib.hppo common-lib.o
	ar rcs common-lib.a common-lib.o

common-lib.o: common-lib.cpp
	${CC} ${CF} common-lib.cpp -o common-lib.o

common-lib.hppo: common-lib.hpp
	${CC} -Wall -Wextra common-lib.hpp -o common-lib.hppo

.PHONY:clean

clean:
	rm common-lib.o common-lib.hppo common-lib.a
