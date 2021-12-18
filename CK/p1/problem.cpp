#include <iostream>
#include <chrono>
#include <ctime>
#include <ratio>

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

//V1
int v1(){
  int i=3;
  int n=1000;
  int s=0;
  while (i < n){
    if (i % 3 == 0 || i % 5 == 0){
      s = s + i;
    }
    i++;
  }
  std::cout << s << '\n';
  return 1;
}

//V2 (avoiding div/mod functions)
int v2(){
  int i=3;
  int j=5;
  int k=15;
  int n=1000;

  int s=0;
  //Sum multiples of 3
  while (i < n){
    s = s + i;
    i = i + 3;
  }

  //Sum multiples of 5
  while (j < n){
    s = s + j;
    j = j + 5;
  }

  //Subtract multiples of 3 and 5 (they were double-summed already)
  while (k < n){
    s = s - k;
    k = k + 15;
  }
  std::cout << s;
  return 1;
}

int main(){
  v1();
  v2();
}
