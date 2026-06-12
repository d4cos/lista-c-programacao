// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num, i = 1, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (i <= num) {
        if (num % i == 0)
            divisores++;

        i++;
    }

    if (divisores == 2)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}
