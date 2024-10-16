#include <stdio.h>

int main() {
    int total_seats = 108; 
    int x; 
    int seats_per_row; 

    printf("Enter the number of rows on the bus: ");
    scanf("%d", &x);

    if (x > 0 && total_seats % x == 0) {
        seats_per_row = total_seats / x;
        printf("Number of seats per row: %d\n", seats_per_row);
    } else {
        printf("Invalid number of rows");
    }

    return 0;
}
