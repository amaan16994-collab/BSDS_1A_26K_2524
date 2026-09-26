#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence, dataset_size;
    int role, status, permission;
    float model_score;

    printf("Enter Accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter Confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter Dataset Size: ");
    scanf("%f", &dataset_size);

    printf("Enter User Role (1: Admin, 2: Dev, 3: Researcher): ");
    scanf("%d", &role);

    printf("Enter Model Status (1: Ready, 2: Testing, 3: Training): ");
    scanf("%d", &status);

    printf("Enter Permission Value (1: View, 2: Train, 4: Test, 8: Deploy): ");
    scanf("%d", &permission);

    model_score = (accuracy + confidence) / 2.0f;

    printf("\n--- Model Information ---\n");
    printf("Model Score: %.2f (Rounded: %.0f)\n", model_score, roundf(model_score));
    printf("Memory Size of Score Variable: %zu bytes\n", sizeof(model_score));

    printf("User Role: ");
    switch (role) {
        case 1:
            printf("Admin\n");
            break;
        case 2:
            printf("Developer\n");
            break;
        case 3:
            printf("Researcher\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("Model Status: ");
    switch (status) {
        case 1:
            printf("Ready\n");
            break;
        case 2:
            printf("Testing\n");
            break;
        case 3:
            printf("Training\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("Deployment Permission: %s\n", (permission & 8) ? "Granted" : "Denied");

    printf("\n--- Deployment Evaluation ---\n");

    if (status == 1) {
        if (permission & 8) {
            if (accuracy >= 80.0f && confidence >= 75.0f && dataset_size >= 1000.0f) {
                printf("Decision: Deployment Ready\n");
            } else {
                printf("Decision: Not Ready (Metrics below threshold)\n");
            }
        } else {
            printf("Decision: Not Ready (Lacks deployment permission)\n");
        }
    } else {
        printf("Decision: Not Ready (Model status is not Ready)\n");
    }

    return 0;
}
