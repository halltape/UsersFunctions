#include <stdio.h>

long long int factorial (long long int);

int main(void){
    long long int N, result;
    scanf("%lld", &N);
    result = factorial(N);
    printf("%lld", result);
    return 0;
}

long long int factorial(long long int k){
    long long int f = 1, fact = 1;
    for(long long int i = 1; i <= k; i++){
    fact = fact * f;
    f += 1;
    }
    return fact;
}