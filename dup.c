#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_strdup(char *str) {
    if (str == NULL)
        return NULL;
    
    unsigned int length = strlen(str);
    char *array = (char *)malloc(sizeof(char) * (length + 1));
    if (array == NULL)
        return NULL;
    
    strcpy(array, str);
    return array;
}

int main(void) {
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL) {
        printf("failed to allocate memory\n");
        return 1;
    }

    printf("%s\n", s);
    free(s);
    return 0;
}
