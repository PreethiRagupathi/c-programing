#include <stdio.h>
int main() {
    float radius, height, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = PI * radius * radius * height;
    printf("The volume of the cylinder is: %.2f cubic units\n", volume);

    return 0;
}

