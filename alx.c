#include <stdio.h>

/**
 * main - prints out digits with putchar
 * Return: always success
 */
int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }
    putchar('\n');

    return 0;
}
