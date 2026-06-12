// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int num, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0)
            divisores++;
    }

    if(divisores == 2)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}
