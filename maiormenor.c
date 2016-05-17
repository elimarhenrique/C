#include <stdio.h>

int main() {
    int n, i, val, maior, menor;
    printf("Informe o tamanho da sequência: ");
    scanf("%d", &n);
    
    printf("Informe uma sequência de %d números inteiros: ", n);
    scanf("%d", &val);

    maior = menor = val;
    for (i = 2; i <= n; i++) {
        scanf("%d", &val);
        if (val > maior)
            maior = val;
        else
           if (val < menor)
              menor = val;
    }
    
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
