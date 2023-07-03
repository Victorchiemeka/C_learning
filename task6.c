#include <stdio.h>

int main(void) {
    int input; 
    scanf("%d", &input);

    double temperature = input * 9.0 / 5.0 + 32.0;
    printf("%.1lf", temperature);

    return 0;
}
