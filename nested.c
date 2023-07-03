#include <stdio.h>

int main(void){
    for(int i = 0; i<8; i++){
       for(int j = 0 ;  j< i-1; j++){
        printf(" ");
       }
       for(int k = 0; k<=i; k++){
        printf("#");
       }
       printf("\n");
    }
}