#include <stdio.h>

int main() {
    float confidence;
    int user_type;

    printf("Enter confidence score: ");
    scanf("%f", &confidence);

    printf("Enter user type (1 for Authorized, 0 for Unauthorized): ");
    scanf("%d", &user_type);

    if (confidence >= 80.0f) {
        printf("Face Recognized\n");
        if (user_type == 1) {
            printf("Access Granted\n");
        } else {
            printf("Access Denied\n");
        }
    } 
    else if (confidence >= 50.0f && confidence < 80.0f) {
        printf("Manual Verification Required\n");
        printf("%s\n", (user_type == 1) ? "Pending Manual Review" : "Access Denied");
    } 
    else {
        printf("Face Not Recognized\n");
        if (confidence < 50.0f || user_type == 0) {
            printf("Access Denied\n");
        }
    }

    return 0;
}
