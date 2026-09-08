int main() {

    int valor;
    int unidade;
    int dezena;
    int centena;

    scanf("%d", &valor);

    unidade = valor % 10;
    dezena = (valor % 100 - unidade) / 10; 
    centena = valor / 100;

    printf("%d%d%d", unidade, dezena, centena);

    return 0;
}
