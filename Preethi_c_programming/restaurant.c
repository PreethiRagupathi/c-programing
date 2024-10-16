#include <stdio.h>

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Pasta\n");
    printf("4. Salad\n");
    printf("5. Drink\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("You ordered Pizza.\n");
            break;
        case 2:
            printf("You ordered Burger.\n");
            break;
        case 3:
            printf("You ordered Pasta.\n");
            break;
        case 4:
            printf("You ordered Salad.\n");
            break;
        case 5:
            printf("You ordered Drink.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

