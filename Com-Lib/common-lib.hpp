
#ifndef COM_H
#define COM_H
/**
 * atkinsSieve(n): long int *
 * An implementation of atkin's sieve that returns an array of primes <= n
 * PARAMS:
 * 	n: the maxium value possible for the solution space
 * RETURN:
 * 	An array of long ints where each entry is a prime <= the parameter n.
 * 	Note: the first element in the array is the count of elements. 
 * 	If the array only has one value, it has two elements, and the first has value 1.
 * 	If the array has 5 values, it has 6, with 5 as the first.
 * NOTE: if the value of n is too big, this will return -1 since it cannot execute
 **/
long int * atkinsSieve(long int n);

/**
 * coefficients(long int n): long int *
 * A method to generate coefficients for the AKS primality test
 * Params:
 * 	n: the number which the AKS test is being performed on
 * Returns:
 * 	a list of coefficients for use with the ASK primality test
 * NOTE: if the value of n is too big, this will return -1;
 **/
long int * coefficients(long int n);

/**
 * AKSprim(long int n): boolean
 * An implementation of the ASK primality test
 * Params:
 * 	n: the number being checked for primality
 * Returns:
 * 	true if n is prime, false otherwise
 * NOTE: this defaults to false if coefficients(n) returns -1;
 **/
bool AKSprime(long int n);

#endif
