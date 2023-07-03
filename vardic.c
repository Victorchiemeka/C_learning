#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list ap;
        unsigned int i;
        int  x;

        va_start(ap, n);
        for (i = 0; i < n; i++)
        {       
                x = va_arg(ap, int);
                printf("%d",x);
        }
        printf("\n");
        va_end(ap);
}



int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}