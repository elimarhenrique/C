/*
* ptrprint.c: imprime endereço de ponteiro e conteúdo de variável através
* do ponteiro
*
* Para compilar:
* cc -Wall ptrprint.c -o ptrprint
*
* Alexandre Fiori
*/
#include <stdio.h>
int main() {
    
    char *ptr;
    char tmp = 'A';
    
    printf("ptr(%p) tem %d bytes.\n", &ptr, (int) sizeof(ptr));
    printf("tmp(%p) tem %d bytes.\n", &tmp, (int) sizeof(tmp));
    
    ptr = &tmp;

    printf("agora ptr(%p) aponta para: %c\n", ptr, ptr[0]);
    printf("mas o endereço de ptr(%p) é o mesmo!\n", &ptr);   
    
    return 0;
}    
