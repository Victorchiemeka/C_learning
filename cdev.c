#include<stdio.h>



void main()

{

float e[5];

int i;



printf("Enter Salary of five Employees !");

for(i=0;i<5;i++)

{

scanf("%f",&e[i]);

}

printf("Memory map for the Array Elements !");

for(i=0;i<5;i++)

{

printf("\n The variable e[%d] the value %f at Memory address %p",i,e[i],&e[i]);

}



}