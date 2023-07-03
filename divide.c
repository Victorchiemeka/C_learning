#include <stdio.h>

int main(void){
    double amount;
    double price;
    scanf("%lf",&amount);
    scanf("%lf", &price);

    int intamount = (int) amount;
    
    // int total = intamount/price;
    printf("%d",intamount/price);
}