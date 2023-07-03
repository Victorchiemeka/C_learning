#include <stdio.h>

int main(void)
{
    char *names[4] = {
        "john",
        "Bruce",
        "Isioma",
        "Victor"
    };

    int i = 0;
    for (i; i < 4; i++)
    {
        printf("values of names[%d] = %s\n",i,names[i]);
    }
}