#include <stdio.h>

int main() {
    int programming, math, ai;
    float attendance, average;

    printf("Enter Programming marks: ");
    scanf("%d", &programming);

    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter AI marks: ");
    scanf("%d", &ai);

    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

    if (programming >= 50 && math >= 50 && ai >= 50 && attendance >= 75.0) {
        average = (programming + math + ai) / 3.0f;
        printf("Status: Eligible\n");
        printf("Average Marks: %.2f\n", average);

        if (average >= 80) {
            printf("Performance: Excellent\n");
        } else if (average >= 70) {
            printf("Performance: Very Good\n");
        } else if (average >= 60) {
            printf("Performance: Good\n");
        } else if (average >= 50) {
            printf("Performance: Satisfactory\n");
        } else {
            printf("Performance: Poor\n");
        }

    } else {
        printf("Status: Student is Not Eligible\n");
    }

    return 0;
}
