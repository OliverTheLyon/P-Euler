#include <stdio.h>
#include <stdlib.h>

int main(){
	int five = 1000/5;
	int three = 1000/3;
	int count = five + three;
	int values[count];
	int i, idx = 0;
	for(i = 5; i < 1000/5; i += 5){
		values[idx] = i;
		idx += 1;
	}
	for(i = 3; i < 1000/3; i += 3){
		values[idx]  = i;
		idx += 1;
		if(i % 5 == 0){
			idx -= 1;
		}
	}

	for(i = idx; i < count; i += 1){
		values[i] = 0;
	}

	int sum = 0;
	printf("The sum of [%d", *values);
	for(int i = 0; i < idx + 1; i += 1){
		if(i < idx){
			printf(", %d", values[i + 1]);
		}
		sum += values[i];
	}
	printf("] is %d\n", sum);
}
