/*
* charaddr.c: imprime o endereço e cada membro do vetor
*
* Para compilar:
* gcc -o charaddr charaddr.c
*
* Elimar Henrique
*/
#include<stdio.h>
#include<string.h>

int main() {

    int i;
    char str[] = "sou um vetor";
    
    printf("imprime o endereço de memoria de cada membro do vetor: \n");
    for(i = 0; i < strlen(str); i++) {
       fprintf(stdout, "%p => %c\n", &str[i], str[i]);
    }

    printf("imprime o endereço de memoria de cada membro do vetor tipo int: \n");
    int stra[] = {'s', 'o', 'u', ' ', 'u', 'm', ' ', 'v', 'e', 't', 'o', 'r'}; 
    
    printf("stra %d\n", (int) sizeof(stra));
    
    for(i = 0; i < sizeof(stra)/sizeof(int); i++) {
//   fprintf(stdout, "%p -> %c\n", &stra[i], (char) stra[i]);
// também pode ser escrito da forma acima
     printf("%p -> %c\n", &stra[i], (char) stra[i]);
    }

    return 0;
}
