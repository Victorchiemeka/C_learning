#include <stdio.h>
/**
 * @print_alphabet - a function that prints in lower
 * Return: return the function
 */
// void print_alphabet(void)
int main(void)
{
        char a;
        int i = 0;
        while(i < 10){
            a = 'a';
            while(a <= 'z')
            {
                putchar(a);
                a++;
            }
            // putchar('\n');
            i++;
        }
       
}
