#include <stdio.h>
// #include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Emter a brick");
        scanf("%d", &n);
    }
    while (n < 1 || n > 8);
    //for each row
    for (int i = 0;  i < n; i++)
    {
        //for each space
        // for (int s = 0; s < n - i - 1; s++)
        // {
        //     printf(" ");
        // }
        //for each column
        for (int j = 0; j <= i; j++)
        {
            //print a brick
            printf("#");
        }
        //move to next row
        printf("\n");
    }
}