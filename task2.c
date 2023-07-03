#include <stdio.h>

int main(void) {
    int num_robots, height, weight, engine_power, resistance, power_score;
    int total_power_score = 0;
    
    scanf("%d", &num_robots);
    
    for (int i = 0; i < num_robots; i++) {
        scanf("%d %d %d %d", &height, &weight, &engine_power, &resistance);
        power_score = (engine_power + resistance) * (weight - height);
        total_power_score += power_score;
    }
    
    printf("%d\n", total_power_score);
    
    return 0;
}
