#include <stdio.h>

int main(void) {
     int x[] = {7,3,4,0,8,5,9,6,2};
     int *ptr;
     int i;
     ptr = x;
    for (i = 0; i < 9; i++)
    {
        printf("index[%d] value is [%d]\n",i,ptr[i]);
    }
    




}