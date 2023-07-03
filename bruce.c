#include <stdio.h>

int main(void){
    int height;
    int leave;

    scanf("%d",&height);
    scanf("%d",&leave);

    if(height==5 ||height < 5 && leave >= 8){
        printf("Tinuviel");
    }
    else if(height == 10 || height > 10 && leave >= 10){
        printf("Calaelen");
    }
    else if(height == 8 || height < 8 && leave==5 || leave < 5){
        printf("Falarion");
    }
    else if(height == 12 || height > 12 &&  leave <= 7){
        printf("Dorthonion");
    }
    else{
        printf("Uncertain");
    }
}