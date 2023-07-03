#include <stdio.h>

/*
Your program will read an integer (between 0 and 12) indicating the number of
 hours past noon of your arrival. For example, 0 indicates a noon arrival, 
 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, 
 and 5 dollars are added for every hour after noon. 
 Thankfully the total is capped at 53 dollars,
  so you'll never have to pay more than that. 
  Your program should print the price (an integer) you have to pay,
   given the input arrival time.


*/
int main(void){
    int number;
    int intial = 10;
       scanf("%d",&number);
       if( number == 0){
        printf("%d",intial);
       }
       else{
        (intial += (5 * number)) > 53 ? printf("%d", 53) : printf("%d", intial);
       }
    
}