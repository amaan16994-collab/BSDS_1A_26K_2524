#include <stdio.h>
#include <string.h>

int main(void) {
    char feedback[500];
    char updated[1000];
    char buffer[1000];
    char *pos;
    size_t len;

    printf("Enter customer feedback: ");
    if (fgets(feedback, sizeof(feedback), stdin) == NULL) {
        return 1;
    }

    len = strlen(feedback);
    if (len > 0 && feedback[len - 1] == '\n') {
        feedback[len - 1] = '\0';
        len--;
    }

    printf("Total number of characters: %zu\n", len);

    int has_good = (strstr(feedback, "good") != NULL);
    int has_bad = (strstr(feedback, "bad") != NULL);

    printf("Sentiment Report: ");
    if (has_good && has_bad) {
        printf("Mixed (contains both 'good' and 'bad')\n");
    } else if (has_good) {
        printf("Positive (contains 'good')\n");
    } else if (has_bad) {
        printf("Negative (contains 'bad')\n");
    } else {
        printf("Neutral (neither 'good' nor 'bad' found)\n");
    }

    if (has_bad) {
        strcpy(updated, feedback);
        while ((pos = strstr(updated, "bad")) != NULL) {
            size_t prefix_len = (size_t)(pos - updated);
            strncpy(buffer, updated, prefix_len);
            buffer[prefix_len] = '\0';
            strcat(buffer, "not good");
            strcat(buffer, pos + 3);
            strcpy(updated, buffer);
        }
        printf("Updated review: %s\n", updated);
    }

    return 0;
}
