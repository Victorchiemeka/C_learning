#include <stdio.h>

struct student {
    int roll;
    float percent;
    char name[10];
};
int main(void){
    struct student s1 = {1, 3.4, "emeka"};

    printf("%d\n", s1.roll);
}