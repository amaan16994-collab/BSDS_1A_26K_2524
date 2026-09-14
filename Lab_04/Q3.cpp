#include <stdio.h>

int main() {
    int total_records, missing_records, duplicate_records;

    printf("Enter total number of records: ");
    if (scanf("%d", &total_records) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number of missing records: ");
    if (scanf("%d", &missing_records) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number of duplicate records: ");
    if (scanf("%d", &duplicate_records) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (total_records <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    if (missing_records < 0 || duplicate_records < 0 || 
        missing_records > total_records || duplicate_records > total_records) {
        printf("Invalid Dataset\n");
        return 0;
    }


    double missing_pct = ((double)missing_records / total_records) * 100.0;
    double duplicate_pct = ((double)duplicate_records / total_records) * 100.0;

    if (missing_pct > 30.0) {
        printf("Poor Quality Dataset\n");
    } 
    else if (duplicate_pct > 20.0) {
        printf("Dataset Requires Cleaning\n");
    } 
    else {
        printf("Dataset Ready for Training\n");
    }

    return 0;
}
