#include <stdio.h>

int main() {
    int v[5] = {5, 12, 8, 15, 20};

    for(int i = 0; i < 5; i++) {
        if(v[i] > 10) {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}
