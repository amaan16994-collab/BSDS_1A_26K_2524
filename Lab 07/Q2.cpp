#include <stdio.h>
#include <ctype.h>

int main() {
    
    char logs[3][30];
    int uppercase_count = 0;

    printf("=== Cybersecurity Log Parser & Analyzer ===\n\n");

    
    for (int i = 0; i < 3; i++) {
        printf("Enter CSV log entry %d (e.g., Admin_User,Access Granted,10:45AM): ", i + 1);
        
        
        scanf(" %[^\n]", logs[i]);
    }

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; logs[i][j] != '\0'; j++) {
            // Check if the current character is an uppercase letter (A-Z)
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') {
                uppercase_count++;
            }
        }
    }

    
    printf("\n=========================================\n");
    printf("         LOG ANALYSIS REPORT             \n");
    printf("=========================================\n");
    printf("Total uppercase letters (A-Z) found: %d\n", uppercase_count);
    printf("=========================================\n");

    return 0;
}
