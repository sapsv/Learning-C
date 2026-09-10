int main() {

    int saldo = 1000;
    int op;
    int sacDep;
    printf("Cash Machine");

    do {
        printf("\n\nWhat do you wanna do now?");
        printf("\n\n1 - Check Balance");
        printf("\n2 - Deposit");
        printf("\n3 - Withdraw");
        printf("\n4 - Exit\n\n");

        scanf("%d", &op);
        
        switch (op) {

            case 1: 
            
                printf("Your balance is: %d", saldo);

            break;

            case 2: 
            
                printf("How much do you wanna deposit?\n");
                scanf("%d", &sacDep);

                if (sacDep <= 0) {
                
                    printf("Invalid amount");

                    continue;
                }
            saldo = saldo + sacDep;
               
            break;

            case 3: 
            
                printf("How much do you wanna withdraw?\n");
                scanf("%d", &sacDep);

                if (sacDep <= 0 || sacDep > saldo || sacDep % 5 != 0) {

                    printf("Invalid amount");
                    
                    continue;
                }
            saldo = saldo - sacDep;

        }//switch
    } while (op != 4);//do

    printf("System Closed");
    
    return 0;
}
