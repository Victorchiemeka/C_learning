#include <stdio.h>
#include <string.h>
/**
 * _strncat - a function that concatenates two string
 * @dest: parameter to the function
 * @src: another parameter 
 * @n: n parameter 
 * Return: return the pointer string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        strncat(dest, src, n);
        return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}