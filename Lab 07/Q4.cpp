#include <stdio.h>
#include <string.h>

int main() {
    
    char word_grid[3][100];
    
    char longest_word[100] = "";
    int max_len = 0;
    int max_row = -1;
    int max_col = -1;

    printf("=== Puzzle Game Word Length Evaluator ===\n");
    printf("Enter 3 space-separated words for each of the 3 rows:\n\n");

  
    for (int i = 0; i < 3; i++) {
        printf("Row %d: ", i + 1);
        
        scanf(" %[^\n]", word_grid[i]);
    }

    
    for (int i = 0; i < 3; i++) {
        int col = 0;          
        int char_idx = 0;     
        char current_word[100];

        
        for (int c = 0; ; c++) {
            
            if (word_grid[i][c] == ' ' || word_grid[i][c] == '\0') {
                current_word[char_idx] = '\0'; 
                
                if (char_idx > 0) { 
                    int len = strlen(current_word);
                    
                    
                    if (len > max_len) {
                        max_len = len;
                        strcpy(longest_word, current_word);
                        max_row = i;
                        max_col = col;
                    }
                    col++; 
                }
                
                char_idx = 0; // Reset character index for the next word
                
                if (word_grid[i][c] == '\0') {
                    break; // Exit inner loop when the end of the row string is reached
                }
            } else {
                current_word[char_idx++] = word_grid[i][c];
            }
        }
    }

    printf("\n--- Results ---\n");
    if (max_len > 0) {
        printf("Longest Word: \"%s\"\n", longest_word);
        printf("Length      : %d characters\n", max_len);
        printf("Row Index   : %d\n", max_row);
        printf("Column Index: %d\n", max_col);
    } else {
        printf("No valid words found in the grid.\n");
    }

    return 0;
}
