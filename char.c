#include <stdio.h>

int main(void){
   int a,*p,**b;
   a = 10;
   p = &a;
   b = &p;

   printf("value stored at a %d\n",a);
   printf("value stored at p %d\n",*p);
   printf("value stored at b %d", **b);
   
}