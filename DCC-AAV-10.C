#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};

    for(int i = 4; i >= 0; i--) {
        printf("%d\n", v[i]);
    }

    return 0;
}
