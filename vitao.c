#include <stdio.h>

/**
Your program should first read the number of cars to be weighed 
(integer) followed by the weights of the cars (doubles). 
Then your program should calculate and display
 how much weight to add or subtract from each car such that every car has the same weight.
  The total weight of all of the cars should not change. These additions and 
  subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. 

*/

int main(void){
    int cars_num;
    double weights[50];
    double amount[50];
    double average_weight;
    int i, j;
    int sum;

    scanf("%d",&cars_num);
    //adding the boxcars weight in the 
    for(i=0;i<cars_num;i++){
        scanf("%lf",&weights[i]);
        sum = sum + (weights[i]);
        average_weight = sum / cars_num;
    }
    // printing the amount to be substracted or added
    for(j=0;j<cars_num;j++){
        amount[j] = average_weight - weights[j]; //if the average is greater than the weight of the boxcar, then the amount will be positive(meaning adding weight to the boxcar)
        printf("%.1lf",amount[j]);
    }
}