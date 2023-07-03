#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main(void)
{
    struct student s1 = {10,"Bruce",90.5};
    struct student s2 = {2,"Victor", 85.3};

    printf("Content in S1\n");
    printf("%d %s %f\n", s1.rollno, s1.name,s1.marks);

    printf("Content in S2\n");
    printf("%d %s %f\n", s2.rollno, s2.name, s2.marks);
}