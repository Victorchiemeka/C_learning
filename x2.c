#include <stdio.h>
int mul(int a, int b){
    int c;
    c = a *b;
    return (c);
}
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}