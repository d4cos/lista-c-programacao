#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        v[i] += 2;
        printf("%d\n", v[i]);
    }

    return 0;
}
