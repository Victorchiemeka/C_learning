#include <stdio.h>

void print_line(int n){
    if (n <= 0){
        putchar('\n');
    }
    else{
        int i;
        for(i = 0; i < n; i++){
            putchar('_');
        }
        putchar('\n');
    }
}
int main(void)
{
      print_line(0);
    print_line(1);
    print_line(10);
    print_line(4);
    return (0);
}