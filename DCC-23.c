// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maior: %d\n", a);
    else
        printf("Maior: %d\n", b);

    return 0;
}
