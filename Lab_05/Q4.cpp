#include <stdio.h>

int main() {
    int main_choice, sub_choice;

    printf("=== Simple Rule-Based AI Chatbot ===\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");
    printf("Select a category (1-4): ");
    scanf("%d", &main_choice);

    switch (main_choice) {
        case 1:
            printf("\n--- Greeting Menu ---\n");
            printf("1. Hello\n");
            printf("2. How are you?\n");
            printf("3. Goodbye\n");
            printf("Select an option (1-3): ");
            scanf("%d", &sub_choice);

            switch (sub_choice) {
                case 1:
                    printf("\nBot: Hello! Welcome! How can I assist you today?\n");
                    break;
                case 2:
                    printf("\nBot: I'm just a program running in C, but I'm doing great! How about you?\n");
                    break;
                case 3:
                    printf("\nBot: Goodbye! Have a fantastic day ahead.\n");
                    break;
                default:
                    printf("\nBot: Invalid greeting selection.\n");
                    break;
            }
            break;

        case 2:
            printf("\n--- Study Menu ---\n");
            printf("1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");
            printf("Select an option (1-3): ");
            scanf("%d", &sub_choice);

            switch (sub_choice) {
                case 1:
                    printf("\nBot: Programming involves writing code to solve real-world problems. Keep practicing C!\n");
                    break;
                case 2:
                    printf("\nBot: Mathematics forms the logical core of computer science and algorithm design.\n");
                    break;
                case 3:
                    printf("\nBot: Artificial Intelligence focuses on building smart systems that mimic human learning.\n");
                    break;
                default:
                    printf("\nBot: Invalid study topic selection.\n");
                    break;
            }
            break;

        case 3:
            printf("\n--- Weather Menu ---\n");
            printf("1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");
            printf("Select an option (1-3): ");
            scanf("%d", &sub_choice);

            switch (sub_choice) {
                case 1:
                    printf("\nBot: Today's weather looks clear and pleasant.\n");
                    break;
                case 2:
                    printf("\nBot: Tomorrow is expected to be sunny with mild temperatures.\n");
                    break;
                case 3:
                    printf("\nBot: The weekly forecast indicates mostly clear skies ahead.\n");
                    break;
                default:
                    printf("\nBot: Invalid weather selection.\n");
                    break;
            }
            break;

        case 4:
            printf("\n--- Help Menu ---\n");
            printf("1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");
            printf("Select an option (1-3): ");
            scanf("%d", &sub_choice);

            switch (sub_choice) {
                case 1:
                    printf("\nBot: I am a simple rule-based chatbot designed using nested C decisions.\n");
                    break;
                case 2:
                    printf("\nBot: Choose numbers 1-4 from the main menu and 1-3 from sub-menus to navigate.\n");
                    break;
                case 3:
                    printf("\nBot: Exiting chatbot session. Goodbye!\n");
                    break;
                default:
                    printf("\nBot: Invalid help option selection.\n");
                    break;
            }
            break;

        default:
            printf("\nBot: Invalid main category choice. Please run the program and enter a number between 1 and 4.\n");
            break;
    }

    return 0;
}
