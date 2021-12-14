#include <stdio.h>
int main(){
	long unsigned int sum = 0;
	long unsigned int fib1 = 1, fib2 = 0, fib3 = 0;
	do{
		fib3 = fib2 + fib1;
		if(fib3 > 4000000){
			break;
		}
		printf("(%lu, %lu, %lu)", fib2, fib1, fib3);
		fib2 = fib1;
		fib1 = fib3;
		if(fib3 % 2 == 0){
			printf("+");
			sum += fib3;
		}
		printf("\n");
	}while(fib3 < 4000000);
	printf("\n%lu\n", sum);
}
