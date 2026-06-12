// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Pode votar\n");
    else
        printf("Nao pode votar\n");

    return 0;
}
