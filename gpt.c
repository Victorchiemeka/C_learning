#include <stdio.h>

#define MAX_USERS 10

int main() {
    int userIDs[MAX_USERS];  // Array to store user IDs
    int i;

    printf("Enter the IDs of 10 users:\n");

    for (i = 0; i < MAX_USERS; i++) {
        printf("User %d ID: ", i + 1);
        scanf("%d", &userIDs[i]);
    }

    printf("\nUser IDs:\n");

    for (i = 0; i < MAX_USERS; i++) {
        printf("User %d: %d\n", i + 1, userIDs[i]);
    }

    return 0;
}
