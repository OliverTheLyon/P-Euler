#include <iostream>
#include <algorithm>
#include "common-lib.hpp"
using namespace std;

long int factor(long int n, long int div){
	if( 0 == div ){
		div = 2;
	}
	for(int i = div; i < n; i += 1){
		if(n % i == 0){
			return max((long int)i, factor(n/i, div));
		}
	}
	return n;

}



int main(){
	long int res = factor(600851475143, 0);
	cout << endl << "The largest prime factor of 600851475143 is " << res << endl;
	return 0;
}
