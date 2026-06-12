// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num = -1;

    while (num <= 0) {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    }

    printf("Numero aceito.\n");

    return 0;
}
