#include <stdio.h>

int main(void) {
    FILE *fptr;
    int roll_no;
    char name[100];
    float marks;

    fptr = fopen("marks.txt", "r");
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    printf("%-10s %-25s %-10s\n", "RollNo", "Name", "Marks");
    printf("-----------------------------------------------\n");

    while (fscanf(fptr, "%d %99s %f", &roll_no, name, &marks) == 3) {
        printf("%-10d %-25s %-10.2f\n", roll_no, name, marks);
    }

    fclose(fptr);

    return 0;
}