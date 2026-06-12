// Davi da Costa Coutrim
// RA: 0028472

#include <stdio.h>

int main() {
    int i = 1, soma = 0;

    while (i <= 100) {
        if (i % 2 == 0)
            soma += i;

        i++;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
