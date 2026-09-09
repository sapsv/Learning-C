int main() { 

    int valor;
    int soma = 0;
    int i = 1;
    int auxValor;
    
    scanf("%d", &valor);

    auxValor = valor;

    while (i != auxValor) {

        if (valor % i == 0) {

            soma = soma + valor / i;
        }
        i++;
    }

    soma = soma - auxValor + 1;

    if (soma == auxValor) {

        printf("Perfeito");
    }

    else {

        printf("Não perfeito");
    }
    return 0;
}
