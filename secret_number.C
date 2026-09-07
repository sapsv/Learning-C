int numero = rand() % 100 + 1;
    int tentativa = 0;
    int contador = 7;
    
    printf("Descubra o némuro secreto. Você tem 7 tentativas. Insira sua primeira tentativa: ");
    
    while (tentativa != numero && contador > 0) {
    
        scanf("%d", &tentativa);

        if (tentativa > numero) {

            printf("O número secreto é menor! %d tentativas restantes\n", contador-1);
        }

        else if (tentativa < numero) {

            printf("O número secreto é maior! %d tentativas restantes\n", contador-1);
        }

        contador = contador - 1;
    }

    if (tentativa != numero) {

        printf("Sem mais tentativas.");
        
    }

    else {

        printf("Parabéns");
    }
    return 0;
}

Não li a parte do srand e ficou assim. Me explica o que mudaria?
