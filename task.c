#include <stdio.h>

int main(void){
    int robot,inside,outside;
    int enginepower, resistance, weight, height;

    scanf("%d", &robot);
    for(int i=0; i<robot; i++){
        scanf("%d %d %d %d",engineower,resistance,weight,height);
        outside = (enginePower + resistance) * (weight - height);
        printf("%d", outside);

    }
    return 0;
}