#include <stdio.h>

void print_square(int size){
    if (size <= 0){
        putchar('\n');
    }
    else{
        int j,i;
        for(i =0; i < size; i++){
            for(j = 0; j==i; j++){
                putchar('#');
            }
            putchar('\n');
        }
    }
}
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}