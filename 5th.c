#include<stdio.h>

int factorial(int p){
    int f = 1;
    for(int i = 1; i <= p; i++){
        f = f * i;
    }
    return f;
}

int combin(int n, int k){
    int res = factorial(n) / (factorial(k) * factorial(n-k));
    return res;
}

int main(void){
    int n = 0, k = 0;
    scanf("%d%d",&n,&k);

    printf("%d",combin(n,k));

    return 0;
}