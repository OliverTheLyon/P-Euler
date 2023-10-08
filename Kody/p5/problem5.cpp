#include <iostream>
#include <vector>
#include <algorithm>
#include "common-lib.hpp"
using namespace std;

int LCM(){
	bool found = false;
	unsigned int i = 1;
	while(!found){
		unsigned int target = 20 * i;
		for(int j = 1; j < 20; j += 1){
			if(target % j != 0){
				found = false;
				break;
			}
			found = true;
		}
		i += (1-found);
	}
	return i * 20;
}

int main(){
	int res = LCM();
	cout << endl << "The smallest number divisible by the numbers 1 to 20 is " << res << endl;
	return 0;
}
