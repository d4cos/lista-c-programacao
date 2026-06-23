#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int soma = 0;
    float media;

    for(int i = 0; i < 5; i++) {
        soma += v[i];
    }

    media = soma / 5.0;

    printf("Media = %.2f\n", media);

    return 0;
}
