#include <stdio.h>

int main() {
    int age, credit_score, has_existing_loan;
    float monthly_income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter income: ");
    scanf("%f", &monthly_income);

    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    printf("Enter existing loan (1 for Yes, 0 for No): ");
    scanf("%d", &has_existing_loan);

    if (age >= 21) {
        if (monthly_income >= 100000 && credit_score >= 750 && has_existing_loan == 0) {
            printf("High Approval Chance\n");
        } 
        else if (monthly_income >= 75000 && credit_score >= 650 && has_existing_loan == 1) {
            printf("Requires Manual Review\n");
        } 
        else if (monthly_income >= 50000 && credit_score >= 600) {
            printf("Possibly Eligible\n");
        } 
        else {
            printf("Rejected\n");
        }
    } else {
        printf("Rejected\n");
    }

    return 0;
}
