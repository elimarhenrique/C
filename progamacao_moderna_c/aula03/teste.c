#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
  unsigned int i= UINT_MAX;

  printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i *8);
  printf("Valor de i: %u\n", i);

  uint32_t a = UINT_MAX;
  printf("O tamanho de a (uint32_t): %zu bytes / %zu bits\n", sizeof a, sizeof a*8);
  printf("Valor de a: %u\n", a);

  uint16_t b = USHRT_MAX;
  printf("O tamanho de b (uint16_t): %zu bytes / %zu bits\n", sizeof b, sizeof b*8);
  printf("Valor de b: %u\n", b);

  short int c= USHRT_MAX;
  printf("O tamanho de c (short int): %zu bytes / %zu bits\n", sizeof c, sizeof c*8);
  printf("Valor de c: %u\n", c);
  return 0;
}
