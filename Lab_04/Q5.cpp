#include <stdio.h>

int main() {
    int role, status, securityLevel;

    printf("Enter User Role (1=Admin, 2=Researcher, 3=Student): ");
    scanf("%d", &role);

    printf("Enter Account Status (1=Active, 0=Inactive): ");
    scanf("%d", &status);

    printf("Enter Security Level: ");
    scanf("%d", &securityLevel);

    if (status == 0) {
        printf("Access Denied (Account Inactive)\n");
        return 0;
    }

    switch (role) {
        case 1: 
            if (securityLevel >= 3)
                printf("Access Granted: Admin Access\n");
            else
                printf("Access Denied\n");
            break;

        case 2: 
            if (securityLevel >= 2)
                printf("Access Granted: Researcher Access\n");
            else
                printf("Access Denied\n");
            break;

        case 3: 
            if (securityLevel >= 1)
                printf("Access Granted: Student Access\n");
            else
                printf("Access Denied\n");
            break;

        default:
            printf("Invalid Role Entered\n");
    }

    return 0;
}
