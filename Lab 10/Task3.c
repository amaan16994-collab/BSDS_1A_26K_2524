#include <stdio.h>
#include <string.h>

int main(void) {
    char email[200];
    char domain[200];
    char *at_ptr;
    size_t len;

    printf("Enter email address: ");
    if (fgets(email, sizeof(email), stdin) == NULL) {
        return 1;
    }

    len = strlen(email);
    if (len > 0 && email[len - 1] == '\n') {
        email[len - 1] = '\0';
    }

    at_ptr = strchr(email, '@');
    if (at_ptr == NULL) {
        printf("Invalid Email Format\n");
        return 0;
    }

    strcpy(domain, at_ptr + 1);
    printf("Domain: %s\n", domain);

    return 0;
}