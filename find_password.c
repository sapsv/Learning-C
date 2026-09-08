int senha = 0;
    int i = 5;
    printf("Insert the three digits password\n");

    while (senha != 123 && i > 0) {
        
        scanf("%d", &senha);

        int unidade = senha % 10;
        int dezena = ((senha % 100) - unidade) / 10;
        int centena = (senha - dezena * 10 - unidade) / 100;

        if (((centena == 1 && dezena == 2) || (centena == 1 && unidade == 3) || (dezena == 2 && unidade == 3)) && (senha != 123)) {

            printf("Wrong password. 2 digits in the right place. %d tries left.", i-1);

        }

        else if ((centena == 1 || dezena == 2 || unidade == 3 ) && (senha != 123)) {

            printf("Wrong password. 1 digit in the right place. %d tries left.", i-1);
            
        }

        else if ((centena != 1 && dezena != 2 && unidade != 3) && (senha != 123)) {
            
            printf("Wrong password. No digits in the right place. %d tries left.", i-1);
            
            }

        i = i - 1;
    }

    if (senha == 123) {
            
        printf("Access given");
            
    }
    else {
            
        printf("Access denied"); 
        
        }
    return 0;
}
