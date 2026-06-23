#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int soma = 0;

    for(int i = 0; i < 5; i++) {
        soma += v[i];
    }

    printf("Soma = %d\n", soma);

    return 0;
}
