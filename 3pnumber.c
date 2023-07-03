#include <stdio.h>

void more_numbers(void)
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= 14; j++) {
            int num = j;
            if (num >= 10) {
                putchar('0' + (num / 10));
                num %= 10;
            }
            putchar('0' + num);
        }
        putchar('\n');
    }
}
int main(void)
{
    more_numbers();
    return (0);
}