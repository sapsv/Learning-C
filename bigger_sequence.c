#include <stdio.h>

int main() {

    int numeros[10];
    int sequencia = 1;
    int maiorSeq = 1;

    scanf("%d", &numeros[0]);
    
    for (int i = 1; i < 10; i++) {

        scanf("%d", &numeros[i]);

        if (numeros[i] == numeros[i-1]) {

            sequencia = sequencia + 1;
        }

        else {
            sequencia = 1;
        }

        if (sequencia > maiorSeq) {

            maiorSeq = sequencia;
        }
    }

    printf("%d", maiorSeq);
    
    return 0;
}
