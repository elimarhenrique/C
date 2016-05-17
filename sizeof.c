/*
* sizeof.c
*
* Para compilar:
* gcc -o enum enum.c
*
* Elimar Henrique
*/
#include <stdio.h>

int main() {

    int  resultado;
    
    resultado = sizeof(char);
    printf("A variavel char  tem %d bytes e %d bits\n",
     resultado, resultado * 8);
     
    resultado = sizeof(int);
    printf("A variavel int   tem %d bytes e %d bits\n",
     resultado, resultado * 8);

    resultado = sizeof(float);
    printf("A variavel float tem %d bytes e %d bits\n",
     resultado, resultado * 8);
     
    resultado = sizeof(double);
    printf("A variavel double tem %d bytes e %d bits\n",
     resultado, resultado * 8);     
     
    resultado = sizeof(short int);
    printf("A variavel short int tem %d bytes e %d bits\n",
     resultado, resultado * 8);

    resultado = sizeof(long int);
    printf("A variavel long int tem %d bytes e %d bits\n",
     resultado, resultado * 8);     
    
    resultado = sizeof(long double);
    printf("A variavel long double tem %d bytes e %d bits\n",
     resultado, resultado * 8);      

    // tamanho de um vetor
    int v1[3];
    resultado = sizeof(int) * 3;
    printf("Um vetor int de 3 posições tem %d bytes e %d bits\n", resultado, resultado * 8);      
    
    return 0;
}

