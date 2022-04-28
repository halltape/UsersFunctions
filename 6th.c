#include<stdio.h>


    int sequence_multipliers(int k){
    int res = 0, new_k = 0;
    for(int i = 1; res < k; i++){
            res = i * (i + 1) * (i + 2);
            new_k = i;
            }
    if(res == k){
        return new_k;
    } else return -1;
}

int main(void){
    int N;
    scanf("%d", &N);

    printf("%d", sequence_multipliers(N));

    return 0;
}