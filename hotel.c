#include <stdio.h>

int main(void)
{
    int age;
    int weight;

    scanf("%d", &age);
    scanf("%d", &weight);

    if (age == 60)
    {
        age = 0;
        weight = 0;
        printf("%d", age + weight);
    }
    else if (age < 10)
    {
        age = 5;
        weight = 0;
        printf("%d", age + weight);
    }
    else if (age > 10 && weight > 20)
    {
        age = 30;
        weight = 10;
        printf("%d", age + weight);
    }
    else if (age > 10)
    {
        age = 30;
        weight = 0;
        printf("%d", age + weight);
    }

    return 0;
}
