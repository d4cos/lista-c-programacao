// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &num);

    } while (num < 1 || num > 5);

    printf("Numero valido.\n");

    return 0;
}
