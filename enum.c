/*
* enum.c: Enumeradores são utilizados para criar variaveis   com nomes diferentes e valores numericos sequenciais
*
* Para compilar:
* gcc -o enum enum.c
*
* Elimar Henrique
*/
#include <stdio.h>

int main() {

    enum {
       jan = 1,
       fev,
       mar,
       abr,
       mai,
       jun,
       jul,
       ago,
       set,
       out,
       nov,
       dez    
    };

    printf("Conteudo: %d\n", out);
    return 0;
}
