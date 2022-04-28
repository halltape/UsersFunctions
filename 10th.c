#include <stdio.h>

int is_prime(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += 1;
        }
    } if(count > 2){
        return 0;
    } else return 1;
}

int main(){
    int k;
    scanf("%d", &k);
    printf("%d", is_prime(k));
    return 0;
}