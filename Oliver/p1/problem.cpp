#include <iostream>

int main(){
    //max number to consider
    int n   = 999;

    //the number of multiples
    int n3  = n/3; 
    int n5  = n/5;
    int n15 = n/15;

    //compute the inputs
    int m3  = 3 * ((n3  * (n3 + 1)) / 2);
    int m5  = 5 * ((n5 * (n5 + 1)) / 2);
    int m15  = 15 * ((n15 * (n15 + 1)) / 2);
     
    //calc solution
    int sol = m3 + m5 - m15;

    std::cout<< "Solution: " << sol <<"\n"; 
    return(0);
}
