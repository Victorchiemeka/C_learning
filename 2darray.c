#include <stdio.h>

int main(void){
    int x[2][5];
    int i,j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &x[i][j]);
        }
    }

    
            printf("%d", x[0][0]);


}