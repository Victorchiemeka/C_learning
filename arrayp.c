#include <stdio.h>

int main(void){
    int x[] = {7,3,4,0,8,5,9,6,2};
    // int i;
    int *ptr;


    ptr=x; // accessing the value of the array

    for (int i = 0; i < 9; i+=5)
    {
        printf("array element of x[%d] is %d\n",i,*ptr);
        ptr++;
    }
}