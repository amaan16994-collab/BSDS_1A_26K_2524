#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double x, y;

    printf("1. Square Root\n2. Power\n3. Absolute Value\n4. Floor\n5. Ceiling\n");
    printf("Choose option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter number: ");
            scanf("%lf", &x);
            if (x >= 0) {
                printf("Result: %.2f\n", sqrt(x));
            } else {
                printf("Error: Negative input\n");
            }
            break;

        case 2:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2f\n", pow(x, y));
            break;

        case 3:
            printf("Enter number: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", fabs(x));
            break;

        case 4:
            printf("Enter number: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", floor(x));
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", ceil(x));
            break;

        default:
            printf("Error: Invalid choice\n");
            break;
    }

    return 0;
}
