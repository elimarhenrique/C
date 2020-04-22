#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 10;

    int *p;

    printf("O endereco de p eh: %p\n", p);

    p = &i;

    printf("O valor de p eh: %d\n", *p);
    return 0;
}
