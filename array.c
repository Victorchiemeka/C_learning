#include <stdio.h>

int main(void){
    int i;
    int array[10];
    int ingredient;

    for(i = 0;i<10;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&ingredient);
    // if(ingredient==0 || ingredient<= 9){
    //     int output = array[ingredient];
    //     printf("%d\n",output);
    // }
    printf("%d",array[ingredient]);
}