#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int SiSZ = 1e6;
int num[SiSZ+10], primes[79000];

void sieve(){  /* This is the Sieve of Eratosthenes, it's using the modified discarding method to filter out all the primes between 1 & 10^6. */
    LL sqrtN;
    sqrtN = sqrt((double) SiSZ);
    int i, j;
    for (i=3; i<=sqrtN; i+=2){
        if (num[i] == 0){
            for (j = i*i; j<=SiSZ; j+= 2*i){
                num[j] = 1;
            }
        }
    }
    int k = 0;
    primes[k] = 2;
    k++;
    for (i=3; i<SiSZ; i+=2){
        if (num[i]==0){
            primes[k] = i;
            k++;
        }
    }
    return;
}

int divisors(LL n){                    /* This function determines the number of divisors of a number. We can also slightly alter it to factorize the number and find the prime factors. */
    LL N = n, sqrtN = sqrt((double)n);
    int i, cnt = 1, x = 0;
    for (i = 0; primes[i]<=sqrtN; i++){
        if (n%primes[i] == 0){
            while (n%primes[i] == 0){
                x++;
                n /= primes[i];
            }
            sqrtN = sqrt((double)n);
        }
        cnt *= (x+1);
        x = 0;
    }
    if (n!= 1){cnt *= 2;}
    return cnt;
}



int main()
{
    sieve();
    return 0;
}
