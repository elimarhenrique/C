#include <stdio.h>
#include <math.h>

int main() {
    int a = (2 + 1) * 6;
    int b = (5 + 1) / 2 * 3;
    printf("Valor de b: %d\n", b);
    int c = (2 + 3) / 4;
    int d = 3 + 2 * (b = 7/2);
    int e = 5 + 10 % 5 / 2;
    
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de c: %d\n", c);
    printf("Valor de d: %d\n", d);
    printf("Valor de e: %d\n", e);            
    
    return 0;
}
