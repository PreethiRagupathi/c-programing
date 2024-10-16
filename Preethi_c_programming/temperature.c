#include <stdio.h>

int main() {
    float temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature > 30) {
        printf("Hot\n");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("Warm\n");
    } else {
        printf("Cold\n");
    }

    return 0;
}

