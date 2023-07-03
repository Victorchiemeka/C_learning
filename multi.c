// processor descriptive
#include <stdio.h>

// entry of the program
int main(void){
    int number;
    int i;
    int multi;

    printf("Input:\n");
    scanf("%d",&number);
    
    printf("Output:\n");
    for(i= 0; i <= 10; i++){
       multi = i * number;
    //    multi++;
       printf("%dx%d = %d\n",i, number, multi);
    }
}