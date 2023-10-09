#include <iostream>
using namespace std;

unsigned int sum_sq_dif(int start, int end){
	int sumsq = (end * (end + 1))/2;
	sumsq -= (start * (start + 1))/2;

	int sqsum = (end * (end + 1) * (2 * end + 1))/6;
	sqsum -= (start * (start + 1) * (2 * start + 1))/6;

	return (sumsq * sumsq) - sqsum;
}

int main(){
	unsigned int res = sum_sq_dif(0, 100);
	cout << "The square difference of the first hundred numbers is " << res << endl;
}
