#include <stdio.h>
#include <math.h>

int main() { 

    int op;
    double num1;
    double num2;
    double result;

    printf("Calculadora Sapin");
    
    do {

        printf("\nEscolha a operação para o cálculo");
        
        printf("\n1 - Soma");
        printf("\n2 - Subtraçao");
        printf("\n3 - Multiplicaçao");
        printf("\n4 - Divisao");
        printf("\n5 - Potenciaçao");
        printf("\n6 - Radiciacao");
        printf("\n0 - Cancelar\n");

        scanf("%d", &op);

        switch (op) {

            case 1:

                printf("Insira o primeiro número para o cálculo: ");
                scanf("%lf", &num1);
                printf("Insira o segundo número para o cálculo: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Resultado: %.02lf", result);

            break;

            case 2:

                printf("Insira o primeiro número para o cálculo: ");
                scanf("%lf", &num1);
                printf("Insira o segundo número para o cálculo: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Resultado: %.02lf", result);

            break;

            case 3:

                printf("Insira o primeiro número para o cálculo: ");
                scanf("%lf", &num1);
                printf("Insira o segundo número para o cálculo: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Resultado: %.02lf", result);

            break;

            case 4:

                printf("Insira o primeiro número para o cálculo: ");
                scanf("%lf", &num1);
                printf("Insira o segundo número para o cálculo: ");
                scanf("%lf", &num2);
                result = num1 / num2;
                printf("Resultado: %.02lf", result);

            break;

            case 5:

                printf("Insira o número para a base: ");
                scanf("%lf", &num1);
                printf("Insira o número para a potência: ");
                scanf("%lf", &num2);
                result = pow(num1, num2);
                printf("Resultado: %.02lf", result);

            break;

            case 6:

                printf("Insira o número para a raiz quadrada: ");
                scanf("%lf", &num1);
                result = sqrt(num1);
                printf("Resultado: %.02lf", result);

            break;
        }
    } while (op != 0);

    printf("Sistema interrompido");
    
    return 0;
}
