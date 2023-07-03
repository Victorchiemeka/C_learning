#include <stdio.h>

int main(void){
    float rol[1][2],i,j;

    for (int i = 0; i <1; i++){
        for (int j = 0; j<2; j++){
            scanf("%f", &rol[i][j]);
        }
      
    }
 for (int i = 0; i <1; i++){
        for (int j = 0; j<2; j++){
            printf("%f", rol[i][j]/2);
        }
      
    }

}