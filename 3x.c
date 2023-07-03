#include <stdio.h>

int main(void){
    int j[3][3] = {
        {23,34,45},
        {35,36,45},
        {56,49,37},
    };

    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++ ){
            printf("%d",j[i][x]);
            printf(", ");
        }
        printf("\n");
    }
}