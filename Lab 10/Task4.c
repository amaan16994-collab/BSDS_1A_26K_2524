#include <stdio.h>
#include <string.h>

int main(void) {
    char customer_name[100];
    int account_number;
    float withdrawal_amount;
    FILE *fptr;
    size_t len;

    printf("Enter Customer Name: ");
    if (fgets(customer_name, sizeof(customer_name), stdin) == NULL) {
        return 1;
    }
    len = strlen(customer_name);
    if (len > 0 && customer_name[len - 1] == '\n') {
        customer_name[len - 1] = '\0';
    }

    printf("Enter Account Number: ");
    if (scanf("%d", &account_number) != 1) {
        return 1;
    }

    printf("Enter Withdrawal Amount: ");
    if (scanf("%f", &withdrawal_amount) != 1) {
        return 1;
    }

    fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL) {
        printf("Error opening bank_log.txt\n");
        return 1;
    }

    fprintf(fptr, "Customer Name: %s | Account Number: %d | Withdrawal Amount: %.2f\n",
            customer_name, account_number, withdrawal_amount);
    fclose(fptr);

    printf("Transaction logged successfully to bank_log.txt.\n");

    return 0;
}
