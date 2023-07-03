#include <stdio.h>
// a program that prints out a user input division and gives out the remainder
int main(void){
  int input , divide , output,total;
    scanf("%d%d",&input, &divide);
    total=input/divide;
    output = input%divide;
    printf("%d\n",total);
    printf("%d\n",output);

}