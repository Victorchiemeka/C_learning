#include <stdio.h>

int main(void){
    int a = 42;
    double d = 54.394;
    char c = 'r';

    int * addressof = &a;
    printf("address of a: %p\n",addressof);
}