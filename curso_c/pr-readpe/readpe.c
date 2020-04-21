#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void fatal(char *msg) {
  if (msg != NULL)
    fprintf(stderr, "ERRO: %s\n", msg);

  exit(1);
}

void usage(void) {
  printf("Uso:\n\treadpe <arquivo.exe>\n");
  fatal(NULL);
}


int main(int argc, char *argv[]) {
  FILE *fh;
  unsigned char buffer[32];

  if (argc != 2)
      usage();

  fh = fopen(argv[1], "rb");

  if (fh == NULL)
    fatal("Arquivo nao encontrado ou sem permissao de leitura"); 

  if (fread(buffer, 32, 1, fh) != 1)
    fatal("nao consegui ler os 32 bytes do arquivo");

  fclose(fh);

  if (!petest_ispe(buffer))
    fatal("Arquivo nao parece ser um executavel PE");


  return 0;
}
