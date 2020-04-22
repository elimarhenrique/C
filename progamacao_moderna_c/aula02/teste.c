#include <stdio.h>

int main(void) {
  unsigned char c;

  printf("O tamano de c (char): %lu bytes / %lu bits\n", sizeof c, sizeof c * 8);

  c = 255;
  printf("valor de c: %i\n", c);

  return 0;
}
