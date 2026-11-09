#include <stdio.h>

void withdraw(float *bal, float amt) {
    if (amt <= *bal) {
        *bal -= amt;
        printf("Success\n");
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *bal, float amt) {
    *bal += amt;
    printf("Updated Balance: %.2f\n", *bal);
}

int main() {
    float balance = 10000.0;
    char type;
    float amount;

    scanf(" %c %f", &type, &amount);

    if (type == 'd' || type == 'D') {
        withdraw(&balance, amount);
    } else if (type == 'c' || type == 'C') {
        deposit(&balance, amount);
    }

    printf("Final Balance: %.2f\n", balance);
    return 0;
}