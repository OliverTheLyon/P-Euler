#include <iostream>
#include "common-lib.hpp"
using namespace std;

long int * factor(long int n){
	long int * res;
	long int * values = (long int *)malloc(sizeof(long int) * 1);
	*values = 0;
	for(long int i = 2; i < n; i += 1){
		if(n % i == 0){
			res = factor(n/i);
			values = (long int *)realloc((void*)values, sizeof(long int) * 3);
			*values = 2;
			values[1] = i;
			values[2] = n/i;
			for(int i = 1; i < *res; i += 1){
				values = (long int *)realloc((void*)values, sizeof(long int) * ((*values) * 2));
				*values += 1;
				values[*values] = res[i];
				break;
			}
		}
	}
	return values;

}


int main(){
	long int * res = factor(600851475143);
	long int top = 0;
	for(long int i = 1; i < *res; i += 1){
		if(AKSprime(res[i]) && res[i] > top){
			top = res[i];
		}
	}
	cout << endl << "The largest prime factor of 600851475143 is " << top << endl;
	return 0;
}
