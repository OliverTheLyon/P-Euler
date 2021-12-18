#include <iostream>

//Returns the sum of the even Fibonacci numbers at most n
int fib_even_sum(int n){

  //Iterate upwards through the fibonacci numbers
  int a = 1;
  int b = 1;
  int sum = 0;

  do{
    //increase [a,b] from [fib(i-1),fib(i)] to [fib(i),fib(i+1)]
    b += a;
    a = b-a;
    sum += b;

    //jump two fib numbers forward, since that's the next even one
    for (int i=0; i<2; i++){
      b += a;
      a = b-a;
    }
  }
  while (b <= n);

  return sum;
}

int main(){
  std::cout << fib_even_sum(4000000) << '\n';
  return 1;
}

/*
"By considering the terms in the Fibonacci sequence whose values
  do not exceed four million,
  find the sum of the even-valued terms."

Observations:
  Starting from fib(0), the sequence of fib terms goes
    odd, odd, even, odd, odd, even, odd, odd, even, etc.
  So we're only actually interested in fib numbers 2, 5, 8, 11, etc.
  That is, sum(i=0 ...)[fib(3i + 2)] for all terms at most four million.


*/
