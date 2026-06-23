#include <stdio.h>

int main() {
    int v[5] = {3, 7, 9, 12, 14};

    for(int i = 0; i < 5; i++) {
        if(v[i] % 3 == 0) {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}
