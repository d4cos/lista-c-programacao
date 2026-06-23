#include <stdio.h>

int main() {
    int v[5] = {15, 8, 25, 4, 19};
    int maior = v[0];

    for(int i = 1; i < 5; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    printf("Maior numero: %d\n", maior);

    return 0;
}
