// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num, maior = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior)
            maior = num;

    } while (num >= 0);

    printf("Maior numero informado = %d\n", maior);

    return 0;
}
