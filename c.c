#include <stdio.h>

void print_most_numbers(void)
{
        int i;

        while (i <= 9)
        {
                if (i != 2 && i != 4)
                {
                        putchar(i + '0');
                }
                i++;
        }
        putchar('\n');
}
int main(void)
{
    print_most_numbers();
    return (0);
}