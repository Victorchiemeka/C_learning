#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char *cap_string(char *str) {
  // Declare variables
  char *new_str = malloc(strlen(str) + 1);
  int i, j;

  // Loop through the string
  for (i = 0; str[i] != '\0'; i++) {
    // Check if the current character is a separator
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
        str[i] == ',' || str[i] == ';' || str[i] == '.' ||
        str[i] == '!' || str[i] == '?' || str[i] == '"' ||
        str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') {
      // If it is, then capitalize the next character
      if (i + 1 < strlen(str)) {
        new_str[j++] = toupper(str[i + 1]);
      }
    } else {
      // Otherwise, just copy the character
      new_str[j++] = str[i];
    }
  }

  // Terminate the string
  new_str[j] = '\0';

  // Return the new string
  return new_str;
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}