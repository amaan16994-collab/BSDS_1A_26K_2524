#include <stdio.h>

int main() {
    int problem_choice, algo_choice;

    printf("Select ML Problem Type:\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &problem_choice);

    switch (problem_choice) {
        case 1:
            printf("\n--- Classification Algorithms ---\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algo_choice);

            switch (algo_choice) {
                case 1: printf("Selected Algorithm: Logistic Regression\n"); break;
                case 2: printf("Selected Algorithm: Decision Tree\n"); break;
                case 3: printf("Selected Algorithm: KNN\n"); break;
                default: printf("Invalid Classification algorithm choice.\n"); break;
            }
            break;

        case 2:
            printf("\n--- Regression Algorithms ---\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algo_choice);

            switch (algo_choice) {
                case 1: printf("Selected Algorithm: Linear Regression\n"); break;
                case 2: printf("Selected Algorithm: Polynomial Regression\n"); break;
                case 3: printf("Selected Algorithm: SVR\n"); break;
                default: printf("Invalid Regression algorithm choice.\n"); break;
            }
            break;

        case 3:
            printf("\n--- Clustering Algorithms ---\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algo_choice);

            switch (algo_choice) {
                case 1: printf("Selected Algorithm: K-Means\n"); break;
                case 2: printf("Selected Algorithm: Hierarchical Clustering\n"); break;
                case 3: printf("Selected Algorithm: DBSCAN\n"); break;
                default: printf("Invalid Clustering algorithm choice.\n"); break;
            }
            break;

        case 4:
            printf("\n--- Computer Vision Algorithms ---\n");
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &algo_choice);

            switch (algo_choice) {
                case 1: printf("Selected Algorithm: CNN\n"); break;
                case 2: printf("Selected Algorithm: YOLO\n"); break;
                case 3: printf("Selected Algorithm: R-CNN\n"); break;
                default: printf("Invalid Computer Vision algorithm choice.\n"); break;
            }
            break;

        default:
            printf("Invalid Problem Type choice.\n");
            break;
    }

    return 0;
}
