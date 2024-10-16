#include <stdio.h>

int main() {
    int age; 
    printf("Enter the customer's age: ");
    scanf("%d", &age);
    if (age < 18) {
        printf("Discount: 20%%\n");
    } else if (age >= 18 && age <= 60) {
        printf("Discount: 10%%\n");
    } else {
        printf("Discount: 30%%\n");
    }

    return 0;
}

