int main() {

    int valor;
    int cem = 0;
    int cinquenta = 0;
    int vinte = 0;
    int dez = 0;
    int cinco = 0;
    
    scanf("%d", &valor);

    if (valor % 5 == 0) {

        if (valor / 100 >= 1) {

            cem = valor / 100;
            valor = valor - (cem * 100);
            
        }

        if (valor / 50 >= 1) {

            cinquenta = valor / 50;
            valor = valor - (cinquenta * 50);
            
        }

        if (valor / 20 >= 1) {

            vinte = valor / 20;
            valor = valor - (vinte * 20);
        }
        
        if (valor / 10 >= 1) {

            dez = valor / 10;
            valor = valor - (dez * 10);
            
        }

        if (valor / 5 >= 1) {

            cinco = valor / 5;
        }
    }

    if (valor % 5 == 0) {

        printf("%d notas de cem", cem);
        
        printf("\n%d notas de cinquenta", cinquenta);
        
        printf("\n%d notas de vinte", vinte);
        
        printf("\n%d notas de dez", dez);
        
        printf("\n%d notas de cinco", cinco);
    }

    else {
        printf("Valor inválido");
    }
    
    return 0;
}
