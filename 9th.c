#include <stdio.h>

void factors(int n){
    for(int i = 1; i <= n; i++) {
        if (n % i == 0){printf("%d ", i);}
    }
}
int main(){
    int k;
    scanf("%d", &k);
    factors(k);
    return 0;
}