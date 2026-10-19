#include <stdio.h>

int main() {
    float sensor_data[3][4];
    int rows = 3;
    int cols = 4;

    printf("=== Environmental Monitoring Station - Sensor Audit ===\n");


    printf("Enter temperature readings for 3 days (each with 4 sensor values separated by spaces):\n");
    for (int r = 0; r < rows; r++) {
        printf("Day %d: ", r + 1);
        for (int c = 0; c < cols; c++) {
            scanf("%f", &sensor_data[r][c]);
        }
    }

    int target_col;
    printf("\nEnter the column index (0 to 3) of the defective sensor to remove: ");
    scanf("%d", &target_col);

    if (target_col < 0 || target_col >= cols) {
        printf("Error: Invalid column index! Please enter a value between 0 and 3.\n");
        return 1;
    }

    for (int r = 0; r < rows; r++) {
        for (int c = target_col; c < cols - 1; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }


    cols--;

    printf("\n--- Updated 3x3 Sensor Data Matrix ---\n");
    printf("+-----------------+-----------------+-----------------+\n");
    for (int r = 0; r < rows; r++) {
        printf("|");
        for (int c = 0; c < cols; c++) {
            printf("     %6.2f      |", sensor_data[r][c]);
        }
        printf("\n");
        printf("+-----------------+-----------------+-----------------+\n");
    }

    return 0;
}
