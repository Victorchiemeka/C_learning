#include <stdio.h>

int main(void){
    int population;
    int outcome;
    int sum = 0;
    double second;

    scanf("%d",&population);
    scanf("%lf",&second);
    // sum = (int) second;
    population = population*(1+(second /100));

    printf("%d",population);


}