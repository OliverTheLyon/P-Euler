#include <iostream>

using namespace std;

int main(){
    int n = 100;
    long int sol = 0;
    int sqr_sum = (n*(n+1)*n*(n+1))/4;
    int sum_sqr = 0;

    for(int i=1; i <= n; i++){
        sum_sqr += i*i;
    }

    sol = sqr_sum - sum_sqr;

    cout<< "Solution: " << sol <<"\n"; 
    return(0);
}


