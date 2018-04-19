#include <stdio.h>

#define limit 150000 /*size of integers array*/
#define prime 10000/*size of primes array*/

int main(){
    int i,j,numbers[limit];
    int primes[prime];

    /*fill the array with natural numbers*/
    for (i=0;i<limit;i++){
        numbers[i]=i;
    }

    /*sieve the non-primes*/
    for (i=0;i<limit;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<limit;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    /*transfer the primes to their own array*/
    j = 0;
    for (i=0;i<limit&&j<prime;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];

    /*print*/
    for (i=0;i<280;i++)
        printf("%d\n",primes[i]);

return 0;
}