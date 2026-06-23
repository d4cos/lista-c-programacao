#include <stdio.h>

int main() {

    int v[5];

    v[0] = 2;
    v[1] = 4;
    v[2] = 6;
    v[3] = 8;
    v[4] = 10;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
