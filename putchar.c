#include <stdio.h>
/**
 * main - a function that prints putchar
 * Return: always sucess
*/
int main(void) 
{
    // declaration of a string by using char and having then in a array
    char character[] = "_putchar";
    //declaring the variable index
    int index;

    for (index = 0; character[index]; index++)
        putchar(character[]);
    
    putchar('\n');
    return 0;
}
