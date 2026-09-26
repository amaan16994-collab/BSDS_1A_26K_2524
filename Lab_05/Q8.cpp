#include <stdio.h>

int main() {
    int permission;

    printf("Enter permission value (0-15): ");
    scanf("%d", &permission);

    printf("\n--- Allowed Operations ---\n");

    if (permission & 1) {
        printf("- View Model\n");
    }
    if (permission & 2) {
        printf("- Train Model\n");
    }
    if (permission & 4) {
        printf("- Test Model\n");
    }
    if (permission & 8) {
        printf("- Deploy Model\n");
    }

    if ((permission & 15) == 0) {
        printf("- No permissions granted\n");
    }

    printf("\n--- Special Clearance Check ---\n");
    if ((permission & 2) && (permission & 8)) {
        printf("User has BOTH Training and Deployment permissions.\n");
    } else {
        printf("User DOES NOT have both Training and Deployment permissions.\n");
    }

    return 0;
}
