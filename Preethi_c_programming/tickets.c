#include <stdio.h>

int main() {
    int x, y, z, total;
    printf("Enter the number of tickets sold in the first week: ");
    scanf("%d", &x);
    
    printf("Enter the number of tickets sold in the second week: ");
    scanf("%d", &y);
    
    printf("Enter the number of tickets sold in the third week: ");
    scanf("%d", &z);

    total = x + y + z;
    printf("The total number of tickets sold is: %d\n", total);

    return 0;




