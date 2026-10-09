#include <stdio.h>

    int max_valor(int a, int b, int c) {

        int maior;

        if (a > b && a > c) {

            maior = a;
        }

        else if (b > c) {

            maior = b;
        }

        else {

            maior = c;
        }

        return maior;
    }

    int min_valor(int a, int b, int c) {

        int menor;

        if (a < b && a < c) {

            menor = a;
        }

        else if (b < c) {

            menor = b;
        }

        else {

            menor = c;
        }
    
        return menor;
    }

    float media_extremos(int a, int b, int c) {
        
        float media_local;

        media_local = (float)(max_valor(a, b, c) + min_valor(a, b, c))/2;

        return media_local;
    }

    int main() {

        int aux1, aux2, aux3;
        float media;

        printf("Entre com o primeiro valor: ");
        scanf("%d", &aux1);

        printf("Entre com o segundo valor: ");
        scanf("%d", &aux2);

        printf("Entre com o terceiro valor: ");
        scanf("%d", &aux3);

        media = media_extremos(aux1, aux2, aux3);

        printf("%.2f\n", media);

    return 0;
}
