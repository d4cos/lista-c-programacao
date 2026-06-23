#include <stdio.h>

int main() {
    int v[5] = {15, 8, 25, 4, 19};
    int menor = v[0];

    for(int i = 1; i < 5; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }

    printf("Menor numero: %d\n", menor);

    return 0;
}
