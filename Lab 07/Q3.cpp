#include <stdio.h>

int main() {
    
    char secret_messages[3][100];

    printf("=== Intelligence Agency Messaging Portal ===\n");
    printf("Restriction: Only uppercase English letters (A-Z) and spaces are allowed.\n");
    printf("Any invalid characters (digits, symbols, lowercase) will automatically truncate input.\n\n");

    
    for (int i = 0; i < 3; i++) {
        // Initialize the array row to an empty string
        secret_messages[i][0] = '\0';

        printf("Enter secret message %d: ", i + 1);
        
        scanf(" %[A-Z ]", secret_messages[i]);

       
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
    }

    
    printf("\n==================================================\n");
    printf("           FILTERED MESSAGES & WORD COUNT         \n");
    printf("==================================================\n");

    for (int i = 0; i < 3; i++) {
        int space_count = 0;
        int word_count = 0;

        // Inner loop traverses the string character by character
        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                space_count++;
            }
        }

        
        if (secret_messages[i][0] != '\0') {
            word_count = space_count + 1;
        } else {
            word_count = 0;
        }


        printf("Message %d: \"%s\"\n", i + 1, secret_messages[i]);
        printf("  - Total Spaces: %d\n", space_count);
        printf("  - Word Count:   %d\n", word_count);
        printf("--------------------------------------------------\n");
    }

    return 0;
}
