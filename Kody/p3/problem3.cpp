#include <stdio.h>
#include <stdlib.h>
#include "common-lib.hpp"


int main(){
	long int * res = atkinsSieve(600851475143);
	printf("%ld ", res[res[0] - 1]);
}
