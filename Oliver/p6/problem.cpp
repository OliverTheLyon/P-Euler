#include <iostream>

using namespace std;

int main(){
    int n = 100;
    long int sol = 0;
    int sqr_sum = (n*(n+1)*n*(n+1))/4;
    int sum_sqr = (n*(n+1)*(2*n+1)/6);

    sol = sqr_sum - sum_sqr;

    cout<< "Solution: " << sol <<"\n"; 
    return(0);
}


