#include <stdio.h>

int main(void)
{
    int number;
    int second;
    int sum;
    scanf("%d %d",&number,&second);
    sum = number+second;
    if(sum >= 10){
        printf("Special tax\n 36\n");
    }
    else{
        printf("regular task \n %d\n",sum+sum);
    }
}