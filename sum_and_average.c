#include <stdio.h>

int main () { 

    int numeros[10];
    int soma = 0;
    double media;
    int maiorMedia = 0;

    scanf("%d", &numeros[0]);
    
    for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Quantity of numbers: %d\n", sizeof(numeros) / sizeof(numeros[0]));

    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        soma = soma + numeros[i];
    }

    printf("Sum of the numbers: %d\n", soma);

    media = (double)soma / (sizeof(numeros) / sizeof(numeros[0]));

    printf("Average of the numbers: %.2lf\n", media);

    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {

        if (numeros[i] > media) {
            maiorMedia = maiorMedia + 1;
        }
    }

    printf("Quantity of numbers above average: %d", maiorMedia);
    return 0;
}
