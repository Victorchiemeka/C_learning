#include <stdio.h>

int main(void)
{
    printf("Enter a positive number ");

    int number;
    scanf("%d", &number);

    if(number <= 0)
    {
        printf("warning");
       
    }
   

    else if(number % 2 != 0)
    {
        printf("this is an odd number %d", number);
    }
    else if(number % 2 ==0)
    {
        printf("this is an even number %d", number);

    }
   
}