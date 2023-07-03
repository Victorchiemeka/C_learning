#include <stdio.h>

void print_diagonal(int n)
{
    if (n <= 0) {
        putchar('\n');
    }
    else {
        int i = 0;
        for (i; i < n; i++) {
            putchar('\n');
            int j;
            for (j = 0; j < i; j++) {
                putchar(' ');
            }
            putchar('\\');
        }
        putchar('\n');
    }
}

int main(void) {
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return 0;
}
