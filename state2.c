#include <stdio.h>

int main(void){
   int input;
   int first;
   int second;
   int sum = 0;
   int total = 0;
   
   scanf("%d",&input);
   for(int i =0; i<input; i++){
    scanf("%d",&first);
    scanf("%d", &second);
    sum = sum + first;
    total = total + second;
   } 
   
   if(sum>total){
    printf("Team %d has an advantage\n",1);
   }
   else{
    printf("Team %d has an advantage\n",2);
   }
    printf("Total weight for team 1: %d\n",sum);
    printf("Total weight for team 2: %d\n", total);
}