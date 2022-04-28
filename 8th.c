#include <stdio.h>


void print_date(int d, int m, int y, int k){
    if(k == 0){printf("%.2d.%.2d.%.2d", d%100, m%100, y%100);}
    if(k == 1){printf("%.2d.%.2d.%d", d%100, m%100, y);}
    if(k == 2){printf("%d/%.2d/%.2d", y, m%100, d%100);}
}

int main(){
    int d,m,y,k;
    scanf("%d%d%d%d", &d, &m, &y, &k);

    print_date(d, m, y, k);


    return 0;
}