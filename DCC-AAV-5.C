#include <stdio.h>

int main() {
    int v[5] = {5, 10, 15, 20, 25};

    for(int i = 0; i < 5; i++) {
        v[i] -= 1;
        printf("%d\n", v[i]);
    }

    return 0;
}
