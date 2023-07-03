#include <stdio.h>

int main(void){
    int i = 01;
    int j = 12;
    int k = 34;

    while(i <= 9){
        printf("0%d", i);
        printf(",");
        i++;
    }
    while(j <= 29){
        printf("%d",j);
        
            printf(",");
        j++;
    }
    while( k <= 39){
        printf("%d",k);
        printf(",");
        k++;
    }
}