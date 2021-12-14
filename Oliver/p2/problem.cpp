#include <iostream>

int main(){
    long int sol = 2;
    long int max = 4000000;
    long int n1 = 1, n2 = 2, n3 = 3;

    while(n3 < max){
        if(n3%2==0){
            sol = sol + n3;
        }
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
    }

    std::cout<< "Solution: " << sol <<"\n"; 
    return(0);
}
