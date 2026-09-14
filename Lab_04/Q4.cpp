#include <stdio.h>

int main() {
    int accuracy;
    int latency;
    int status;

    printf("Enter Model Accuracy (%%): ");
    if (scanf("%d", &accuracy) != 1) {
        printf("Invalid accuracy input.\n");
        return 1;
    }

    printf("Enter Prediction Latency (ms): ");
    if (scanf("%d", &latency) != 1) {
        printf("Invalid latency input.\n");
        return 1;
    }

    printf("Enter Model Approval Status (1 = Approved, 0 = Not Approved): ");
    if (scanf("%d", &status) != 1) {
        printf("Invalid status input.\n");
        return 1;
    }

    int passed = 1;

    if (accuracy < 90) {
        printf("Reason: Accuracy too low\n");
        passed = 0;
    }
    if (latency > 100) {
        printf("Reason: Latency too high\n");
        passed = 0;
    }
    if (status != 1) {
        printf("Reason: Model not approved\n");
        passed = 0;
    }

    if (passed) {
        printf("Model Approved for Deployment!\n");
    } else {
        printf("Model cannot be deployed.\n");
    }

    return 0;
}
