#include <iostream>
#include <algorithm>

int factor(long long int input, int last){
    for(int div = last; div != input; div++){
        if(input%div == 0){
            return(std::max(last,factor(input/div, div)));
        }
    }
    return(input);
}

int main(){
    long long int val = 6000851475143;
    std::cout<< "Solution: " << factor(val,2) <<"\n"; 
    return(0);
}

