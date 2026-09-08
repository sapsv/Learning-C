int main() {

    char op;
    double num1;
    double num2;

    printf("Insert first number for calculation\n");

    scanf("%lf", &num1);

    printf("Choose the operation\n");

    scanf(" %c", &op);

    printf("Insert second number for calculation\n");

    scanf("%lf", &num2);

    switch (op) {

        case '+': printf("%.02f", num1 + num2);

        break;
        
        case '-': printf("%.02f", num1 - num2);
            
        break;

        case '*': printf("%.02f", num1 * num2);

        break;

        case '/': 

            if (num2 == 0) {

                printf("Cannot divide by zero");

            }
            
            else {
            
            printf("%.02f", num1 / num2);

            }

        break;

        default: printf("Invalid operation");
    }
    
    return 0;
}
