#include <stdio.h>

    int sum(int a, int b) {
    int s = a + b;
    return s;
}


int main() {
    int  x, y, summa;
    scanf("%d%d", &x, &y);
    summa = sum(x,y);

    printf("%d", summa);

    return 0;
}
