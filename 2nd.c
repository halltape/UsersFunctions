#include <stdio.h>

int min (int a, int b, int c){
    int minimum = a;
    if(b < a && b < c){
        minimum = b;
    } else if(c < a && c < b){
        minimum = c;
    }
    return minimum;
}

int main()
{
    int x, y, z, minimal_number;

    scanf("%d%d%d", &x, &y, &z);

    minimal_number = min(x, y, z);

    printf("%d", minimal_number);

    return 0;
}