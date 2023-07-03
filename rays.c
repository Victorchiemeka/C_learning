#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
    int n = strlen(str);
    
    for(int i = n/2; i < n; i++)
    {
        printf("%c", str[i]);
        *str++;
    }
    
    // else{
    //     for (int i = ( n- 1) / 2; i < n; i++)
    //     {
    //         printf("%c", str[i]);
    //         *str++;
    //     }
    // }
    
}

int main(void)
{

    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}