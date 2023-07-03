#include <string.h>
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
// getting the length of the function
  int length1 = strlen(dest);
  int length2 = strlen(src);

// looping through the src string
  for (int i = 0; i < length2; i++) {
    dest[length1 + i] = src[i];// store the value of increment of i in the dest pointer and incrementing it by i value
  }

  dest[length1 + length2] = '\0';

  return dest;
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
