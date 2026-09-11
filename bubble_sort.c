#include <stdio.h>

int main() {

    int numeros[10];
    int aux;

        scanf("%d", &numeros[0]);
        
    for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        scanf("%d", &numeros[i]);
    }

    for (int j = 1; j < sizeof(numeros) / sizeof(numeros[0]); j++) {
        
        for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
    
            if (numeros[i] < numeros[i-1]) {

            aux = numeros[i-1];
            numeros[i-1] = numeros[i];
            numeros[i] = aux;
            
            }
        }
    }

    
    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {

        printf("%d", numeros[i]);
    }

    return 0;
}
