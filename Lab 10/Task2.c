#include <stdio.h>
#include <string.h>

int main(void) {
    char names[10][50];
    char temp[50];
    size_t len;

    printf("Enter 10 student names:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        if (fgets(names[i], sizeof(names[i]), stdin) == NULL) {
            return 1;
        }
        len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted student names :\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}