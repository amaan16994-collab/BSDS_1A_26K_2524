#include <stdio.h>
#include <string.h>

int main(void) {
    char input_user[100];
    char input_pass[100];
    char saved_user[100];
    char saved_pass[100];
    FILE *fptr;

    printf("Enter Username: ");
    if (scanf("%99s", input_user) != 1) {
        return 1;
    }

    printf("Enter Password: ");
    if (scanf("%99s", input_pass) != 1) {
        return 1;
    }

    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error opening credentials.txt\n");
        return 1;
    }

    if (fscanf(fptr, "%99s %99s", saved_user, saved_pass) != 2) {
        printf("Access Denied!\n");
        fclose(fptr);
        return 0;
    }

    if (strcmp(input_pass, saved_pass) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    fclose(fptr);

    return 0;
}