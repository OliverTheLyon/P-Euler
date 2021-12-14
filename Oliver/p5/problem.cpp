#include <iostream>

using namespace std;

int main(){
    int upper = 20;
    int lower = 11;
    long int sol = 0;
    long int max = 1;
    long int temp = 1;
    bool div = true;
    int multiple = 20 * 19;

    //make upper lim
    for(int i=lower;i<upper+1;i++){
        max = max*i;
    }
    
    

    //iter 
    for(int i = 1; i*multiple <max;i++){
        div = true;
        temp = (i*multiple);
        
        //check if divisable
        for(int j=lower;j<upper+1;j++){
            if(temp%j != 0){
                div = false;
                break;
            }
        }
        if(div){
            sol = temp;
            break;
        }

    }


    cout<< "Solution: " << sol <<"\n"; 
    return(0);
}
