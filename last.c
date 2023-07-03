#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i == 3 || (i % 3 == 0)) {
            printf("buzz ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
