
#ifndef COM_H
#define COM_H
#endif
/**
 * atkinsSieve(n): long int *
 * An implementation of atkin's sieve that returns an array of primes <= n
 * params:
 * 	n: the maxium value possible for the solution space
 * return:
 * 	An array of long ints where each entry is a prime <= the parameter n.
 * 	Note: the first element in the array is the count of elements. 
 * 	If the array only has one value, it has two elements, and the first has value 1.
 * 	If the array has 5 values, it has 6, with 5 as the first.
 **/
long int * atkinsSieve(long int n);
