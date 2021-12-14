#ifndef COM_H
#define COM_H
#include <stdlib.h>

long int * atkinsSieve(long int n){
	long int * out = (long int *)malloc(sizeof(long int*) * 1);
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
		bool sieve[n];
		for(int i = 0; i < n; i += 1){
			sieve[n] = false;
		}

		for(long int x = 1; x * x < n; x += 1){
			for(long int y = 1; y * y < n; y += 1){
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
				for(int y = x*x; y < n; y *= y){
					sieve[y] = false;
				}
			}
		}
		for(int i = 0; i < n; i += 1){
			if(sieve[i]){
				out = (long int *)realloc((void*)out, sizeof(long int)*(out[0] + 1));
				out[0] += 1;
				out[out[0]-1] = i;
			}
		}
	}
	return out;
}
#endif
