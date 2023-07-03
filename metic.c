#include <stdio.h>

int main(void)
{
    int a , b, c ,d;
    int *p;
    int *t;

    a = 12;
    b = 79;
    p = &a;
    t = &b;

    c = *t * *p;
    d = *t / *p;

    printf("%d\n", c);
    printf("%d",d);
}