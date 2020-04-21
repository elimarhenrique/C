#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *p = malloc(sizeof(int) * 2);

  p[0] = 10;

  printf("Valor de p[0] = %d\n", p[0]);
  printf("Valor de p[0] = %p\n", p[0]);

  return 0;
}
