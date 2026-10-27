#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 50; i++) {
        printf("%d\n", i);
    }

    for (i = 52; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
