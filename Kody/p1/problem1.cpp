#include <stdio.h>

int main(){

	// find closest multiples of 3 and 5 to target
	int target = 999;
	int boundFive = target / 5;
	int boundThree = target / 3;

	int sumThree = 3 * (boundThree * (boundThree + 1))/2;
	int sumFive = 5 * (boundFive * (boundFive + 1))/2;

	int shared = 0;
	for(int i = 1; i <= boundThree; i += 1){
		bool share = i * 3 % 5 == 0;
		shared += (share * i * 3);
	}

	int sum = sumThree + sumFive - shared;

	printf("The sum is %d\n", sum);
	return 0;
}
