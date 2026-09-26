#include <stdio.h>

int main() {
    int category_choice, subcategory_choice;

    printf("Select Category:\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &category_choice);

    if (category_choice == 1) {
        printf("\n--- Animal Subcategories ---\n");
        printf("1. Cat\n2. Dog\n3. Bird\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &subcategory_choice);

        if (subcategory_choice == 1) {
            printf("Selected: Animal -> Cat\n");
        } else if (subcategory_choice == 2) {
            printf("Selected: Animal -> Dog\n");
        } else if (subcategory_choice == 3) {
            printf("Selected: Animal -> Bird\n");
        } else {
            printf("Invalid Animal subcategory choice.\n");
        }
    } 
    else if (category_choice == 2) {
        printf("\n--- Vehicle Subcategories ---\n");
        printf("1. Car\n2. Bus\n3. Bike\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &subcategory_choice);

        if (subcategory_choice == 1) {
            printf("Selected: Vehicle -> Car\n");
        } else if (subcategory_choice == 2) {
            printf("Selected: Vehicle -> Bus\n");
        } else if (subcategory_choice == 3) {
            printf("Selected: Vehicle -> Bike\n");
        } else {
            printf("Invalid Vehicle subcategory choice.\n");
        }
    } 
    else if (category_choice == 3) {
        printf("\n--- Food Subcategories ---\n");
        printf("1. Pizza\n2. Burger\n3. Biryani\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &subcategory_choice);

        if (subcategory_choice == 1) {
            printf("Selected: Food -> Pizza\n");
        } else if (subcategory_choice == 2) {
            printf("Selected: Food -> Burger\n");
        } else if (subcategory_choice == 3) {
            printf("Selected: Food -> Biryani\n");
        } else {
            printf("Invalid Food subcategory choice.\n");
        }
    } 
    else if (category_choice == 4) {
        printf("\n--- Human Subcategories ---\n");
        printf("1. Male\n2. Female\n3. Child\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &subcategory_choice);

        if (subcategory_choice == 1) {
            printf("Selected: Human -> Male\n");
        } else if (subcategory_choice == 2) {
            printf("Selected: Human -> Female\n");
        } else if (subcategory_choice == 3) {
            printf("Selected: Human -> Child\n");
        } else {
            printf("Invalid Human subcategory choice.\n");
        }
    } 
    else {
        printf("Invalid Category choice.\n");
    }

    return 0;
}
