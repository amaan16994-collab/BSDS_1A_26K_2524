#include <stdio.h>

int main() {
    int data_gb, price_per_gb;
    int basic_cost, discount_pct, discount_amount, final_cost;

    printf("Enter data used in GB: ");
    scanf("%d", &data_gb);

    printf("Enter price per GB: ");
    scanf("%d", &price_per_gb);

    basic_cost = data_gb * price_per_gb;

    if (data_gb >= 200) {
        discount_pct = 15;
    }
    else if (data_gb >= 100) {
        discount_pct = 10;
    }
    else if (data_gb >= 50) {
        discount_pct = 5;
    }
    else {
        discount_pct = 0;
    }

    discount_amount = (basic_cost * discount_pct) / 100;
    final_cost = basic_cost - discount_amount;

    printf("Basic Cost: %d\n", basic_cost);
    printf("Discount Amount: %d\n", discount_amount);
    printf("Final Cost: %d\n", final_cost);

    return 0;
}
