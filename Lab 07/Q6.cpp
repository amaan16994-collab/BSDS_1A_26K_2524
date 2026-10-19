#include <stdio.h>

int main() {

    int shifts[4][3] = {0};
    int current_rows = 3; 

    printf("=== Factory Production Shift Log Management ===\n");
    

    printf("Enter the initial 3x3 production data (3 rows x 3 shifts):\n");
    for (int i = 0; i < current_rows; i++) {
        printf("Row %d (3 values separated by spaces): ", i);
        scanf("%d %d %d", &shifts[i][0], &shifts[i][1], &shifts[i][2]);
    }

  
    int target_index;
    printf("\nEnter the target row index (0 to %d) for the emergency shift: ", current_rows);
    scanf("%d", &target_index);

    if (target_index < 0 || target_index > current_rows) {
        printf("Error: Invalid row index! Please enter a value between 0 and %d.\n", current_rows);
        return 1;
    }

    int new_row[3];
    printf("Enter the 3 new production values for the emergency shift: ");
    scanf("%d %d %d", &new_row[0], &new_row[1], &new_row[2]);


    for (int i = current_rows; i > target_index; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }


    for (int j = 0; j < 3; j++) {
        shifts[target_index][j] = new_row[j];
    }

    printf("\n--- Resulting 4x3 Production Matrix ---\n");
    printf("+--------------+--------------+--------------+\n");
    printf("|   Shift 1    |   Shift 2    |   Shift 3    |\n");
    printf("+--------------+--------------+--------------+\n");
    for (int i = 0; i < 4; i++) {
        printf("|     %d        |     %d        |     %d        |\n", 
               shifts[i][0], shifts[i][1], shifts[i][2]);
    }
    printf("+--------------+--------------+--------------+\n");

    return 0;
}
