#include <stdio.h>

int main(void)
{
    printf("===^^===\n");
    printf("Welcome to my hexadecimal converter\n");
    printf("Enter a Number:\n");
    
    int name;  // Declare a variable 
    scanf("%d", &name); // store the variable name using the address of operator

    printf("Decimal representation: %9d\n", name);
    printf("Converted %9x\n", name);
     printf("===^^===\n");

    return (0);

}