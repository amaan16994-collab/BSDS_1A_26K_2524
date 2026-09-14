#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter valid integers.\n");
        return 1;
    }

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal (%d).\n", num1);
    } 
    else if (num1 == num2 && num1 > num3) {
        printf("The greatest numbers are num1 and num2 (both are %d).\n", num1);
    } 
    else if (num1 == num3 && num1 > num2) {
        printf("The greatest numbers are num1 and num3 (both are %d).\n", num1);
    } 
    else if (num2 == num3 && num2 > num1) {
        printf("The greatest numbers are num2 and num3 (both are %d).\n", num2);
    } 
    else if (num1 > num2 && num1 > num3) {
        printf("The greatest number is %d.\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("The greatest number is %d.\n", num2);
    } 
    else {
        printf("The greatest number is %d.\n", num3);
    }

    return 0;
}
