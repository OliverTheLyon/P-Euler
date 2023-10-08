#include <iostream>
#include <cmath>
#include <algorithm>
#include <tuple>
#include "common-lib.hpp"
using namespace std;

tuple<int,int,int> palindrome(){
	int max = 1001;
	int l = 0; 
	int r = 0;
	for(int i=100; i <= 999; i += 1){
		for(int j=100; j <= i; j += 1){
			int temp = i * j;
			int temp2 = temp;
			int len = log10(temp) + 1;
			int ar[len];
			for(int k = 0; k <= len; k += 1){
				ar[k] = temp2 % 10;
				temp2 /= 10;
			}
			bool found = false;
			for(int k = 0; k < len; k += 1){
				if(ar[k] != ar[(len - 1) - k]){
					temp = max;
					found = true;
					break;
				}
			}
			if(!found && max < temp){
				l = i;
				r = j;
				max =  temp;
			}
		}
	}
	return {max, l, r};
}



int main(){
	int res, left, right;
	tie(res, left, right) = palindrome();
	cout << endl << "The largest [3]x[3] palindrome is ( " << left << "x" << right <<")=" << res << endl;
	return 0;
}
