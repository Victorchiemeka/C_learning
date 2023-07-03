#include <stdio.h>

int main(void){
    printf("Today's Date is %s\n", __DATE__);
    printf("The time is %s\n", __TIME__);
    printf("file %s\n", __FILE__);
}