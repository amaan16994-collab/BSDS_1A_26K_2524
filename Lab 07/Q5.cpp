#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char sentences[3][100];

    printf("=== Semicolon-Separated Sentence Vowel Analyzer ===\n");
    printf("Enter 3 semicolon-separated sentences:\n");
    printf("(e.g., Learn C programming; Nested loops are powerful; Practice daily)\n\n");
    printf("Input: ");

    for (int i = 0; i < 3; i++) {
        
        scanf("%99[^;\n]", sentences[i]);
        
        
        char next_char = getchar();
        if (next_char != '\n' && next_char != EOF && i < 2) {
            
        }
    }

    printf("\n--- Vowel Analysis Results ---\n");

  
    for (int i = 0; i < 3; i++) {
        int vowel_count = 0;

        
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char ch = tolower(sentences[i][j]); 
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel_count++;
            }
        }

        printf("Sentence %d: \"%s\"\n", i + 1, sentences[i]);
        printf("Vowel Count: %d\n", vowel_count);
        printf("----------------------------------------\n");
    }

    return 0;
}
