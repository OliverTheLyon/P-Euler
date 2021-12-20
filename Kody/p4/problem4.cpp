#include <iostream>
#include <algorithm>
#include "common-lib.hpp"
using namespace std;

float exp(float base, int exponent){
	if(exponent == 0){
		return 1;
	}
	if(exponent < 0){
		return (1.0/base) * exp(base, exponent + 1);
	}
	return base * exp(base, exponent - 1);
}


bool isPalindrome(long int val){
	int n = val;
	long int rev = 0;
	while(n > 0){
		int dig = n % 10;
		rev = rev * 10 + dig;
		n = n / 10;
	}

	return rev == val;
}


long double * findPalindrome(int n){
	long double min = exp(10, n);
	long double max = 0;
	long double * res = (long double*)malloc(sizeof(long double) * 3);
	*res = 0;
	res[1] = 0;
	res[2] = 0;
	for(int i = 0; i <= n; i += 1){
		max += 9*exp(10,i);
	}

	for(int i = max; i >= min; i -= 1){
		for(int j = max -1; j >= min; j += 1){
			if(j < res[2]){
				break;
			}
			long int prod = i * j;
			if(isPalindrome(prod) == true && prod > *res){
				*res = prod;
				res[1] = i;
				res[2] = j;
				break;
			}
		}
	}
	return res;
}


int main(){
	cout.precision(26);
	long double * soln = findPalindrome(3);
	cout << "Solution: " << *soln << "=" << soln[1] << "x" << soln[2] << endl;
	return 0;
}
