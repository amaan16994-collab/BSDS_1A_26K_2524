#include <stdio.h>

int main() {
    int obstacle, person;
    int battery;

    printf("Enter obstacle status (1 = detected, 0 = none): ");
    if (scanf("%d", &obstacle) != 1 || (obstacle != 0 && obstacle != 1)) {
        printf("Invalid input for obstacle status.\n");
        return 1;
    }

    printf("Enter person status (1 = detected, 0 = none): ");
    if (scanf("%d", &person) != 1 || (person != 0 && person != 1)) {
        printf("Invalid input for person status.\n");
        return 1;
    }

    printf("Enter battery percentage (0-100): ");
    if (scanf("%d", &battery) != 1 || battery < 0 || battery > 100) {
        printf("Invalid battery percentage.\n");
        return 1;
    }

    if (obstacle == 1) {
        if (person == 1) {
            printf("Emergency Stop\n");
        } else {
            printf("Change Direction\n");
        }
    } else {
        if (battery < 20.0) {
            printf("Return to Charging Station\n");
        } else {
            printf("Continue Moving\n");
        }
    }

    return 0;
}
