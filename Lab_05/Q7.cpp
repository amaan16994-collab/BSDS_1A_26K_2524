#include <stdio.h>

int main() {
    float confidence, threshold;

    printf("Enter prediction confidence: ");
    scanf("%f", &confidence);

    printf("Enter required threshold: ");
    scanf("%f", &threshold);

    printf("\n--- Prediction Evaluation ---\n");

    if (confidence >= 90.0f) {
        printf("Confidence Level: Very High\n");
    } 
    else if (confidence >= 75.0f) {
        printf("Confidence Level: High\n");
    } 
    else if (confidence >= 50.0f) {
        printf("Confidence Level: Moderate\n");
    } 
    else {
        printf("Confidence Level: Low\n");
    }

    if (confidence >= threshold && confidence >= 50.0f) {
        printf("Status: Accepted\n");
    } else {
        printf("Status: Rejected\n");
    }

    return 0;
}
