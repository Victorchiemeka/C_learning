#include <stdio.h>

void print_number(int n){
    if (n < 0) {
    putchar('-');
    n = -n;
  }

  if (n >= 1000) {
    putchar((n / 1000) + '0');
    n %= 1000;
  }

  if (n >= 100) {
    putchar((n / 100) + '0');
    n %= 100;
  }

  if (n >= 10) {
    putchar((n / 10) + '0');
    n %= 10;
  }

  putchar(n + '0');
}
int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}