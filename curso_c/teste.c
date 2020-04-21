#include <stdio.h>

int main(void) {
  unsigned char u;
  unsigned int n;

  printf("tamanho de unsigned char u: %zu bytes\n", sizeof(u));
  printf("tamanho de unsigned int n: %zu bytes\n", sizeof(n));
  
  int c;
  int i;

  printf("tamanho de char c: %zu bytes\n", sizeof(c));
  printf("tamanho de int i: %zu bytes\n", sizeof(i));

  return 0;
}
