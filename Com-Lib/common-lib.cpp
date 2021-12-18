#ifndef COM_H
#define COM_H
#include "common-lib.hpp"
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

long int * atkinsSieve(long int n){
	long int * out = (long int *)malloc(sizeof(long int));
	out[0] = 0;
	if(n >= 2){
		out = (long int *)realloc((void*)out, sizeof(long int)*2);
		out[0] += 1;
		out[1] = 2;
	}
	if(n >= 3){
		out = (long int *)realloc((void*)out, sizeof(long int)*3);
		out[0] += 1;
		out[2] = 3;
	}
	if(n >= 5){
		out = (long int *)realloc((void*)out, sizeof(long int)*4);
		out[0] += 1;
		out[3] = 5;
		bool * sieve = (bool*)malloc(sizeof(bool) * n);
		if(NULL == sieve){
			cerr << "Max value (n=" << n << ") resulted in a falure of malloc" << endl;
			free(out);
			out = (long int *)malloc(sizeof(long int));
			*out = -1;
			return out;
		}

		for(long int i = 0; i < n; i += 1){
			sieve[i] = false;
		}

		for(long int x = 1; x * x < n; x += 1){
			for(long int y = 1; y * y < n && y > 0; y += 1){
				long int res = (4*x*x)+(y*y);
				if(res <= n && (res % 12 == 1 || res % 12 == 5)){
					sieve[res] ^= true;
				}

				res = (3 * x * x) + (y * y);
				if (res <= n && res % 12 == 7){
					sieve[res] ^= true;
				}

				res = (3 * x * x) - (y * y);
				if (x > y && res <= n && res % 12 == 11){
					sieve[res] ^= true;
				}

			}
		}

		for(long int x = 5; x*x < n; x += 1){
			if(sieve[x]){
				for(long int y = x*x; y < n && y > 0; y *= y){
					sieve[y] ^= true;
				}
			}
		}
		for(long int i = 0; i < n; i += 1){
			if(sieve[i]){
				out = (long int *)realloc((void*)out, sizeof(long int)*(out[0] + 1));
				out[0] += 1;
				out[out[0]-1] = i;
			}
		}

		free(sieve);
		sieve = NULL;
	}
	return out;
}


long int * coefficients(long int n){
	long int * coef = (long int *)malloc(sizeof(long int) * n);
	if(NULL == coef){
		free(coef);
		coef = (long int *)malloc(sizeof(long int));
		*coef = -1;
		return coef;
	}
	memset(coef, 0, sizeof(long int) * n);

	*coef = 1;
	for(long int i = 1; i < n - 1; coef[0] = -coef[0], i += 1){
		coef[i+1] = (long int)1;
		for(int j = i; j > 0; j -= 1){
			coef[j] = coef[j-1] - coef[j];
		}
	}
	return coef;
}


bool AKSprime(long int n){
	long int * coef;
	coef = coefficients(n);
	if(*coef == -1){
		free(coef);
		coef = NULL;
		return false;
	}

	coef[0] += (long int)1;
	coef[n-1] -= (long int)1;
	long int i = n;
	
	while( i -= 1 >= 0){
		if(coef[i] % n != 0){
			break;
		}
	}
	free(coef);
	coef = NULL;
	return i < 0;
}

#endif
