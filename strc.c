#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that compares string
 * @s1: parameter to the function
 * @s2: a parameter pointer to the function
 * Return: the function;
 */
int _strcmp(char *s1, char *s2)
{
  int i;

  for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
    if (s1[i] != s2[i]) {
      return s1[i] - s2[i];
    }
  }

  if (s1[i] == '\0') {
    return -1;
  } else {
    return 1;
  }
}

int main(void) {
  char s1[] = "Hello";
  char s2[] = "World!";

  printf("%d\n", _strcmp(s1, s2));
  printf("%d\n", _strcmp(s2, s1));
  printf("%d\n", _strcmp(s1, s1));
  return 0;
}
