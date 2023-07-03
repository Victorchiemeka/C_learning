#include <stdio.h>

int main(void){
   int input,output,outside,sum;

   
   output = 0; //declare a variable and intialize to zero because i want to use it to sum the number of another variable using the accumulator pattern
   //program must first read an integer indicating the number of grades to be averaged
   scanf("%d",&input);
   for(int i = 0; i<input; i++){ 
    scanf("%d",&sum);// storing the user input into this 
    output = output + sum;//using the accumulator pattern to sum the number the user inputed 
    
   }
   double total = (double)output;//converting the sum into a double
   total = total / input;//diving the converted sum with the number the user inputed
   
  printf("%.2lf",total);//printing out the total value with the double format specifier
}
