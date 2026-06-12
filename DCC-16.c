// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num;

    printf("Digite o numero do pedido: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("Ganhou refrigerante e sobremesa.\n");
    else if (num % 3 == 0)
        printf("Ganhou refrigerante.\n");
    else if (num % 5 == 0)
        printf("Ganhou sobremesa.\n");
    else
        printf("Nao ganhou premio.\n");

    return 0;
}
