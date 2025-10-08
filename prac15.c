#include <stdio.h>

int main() {
    float num1, num2, num3, num4, num5;
    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    float largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }
    if (num5 > largest) {
        largest = num5;
    }
    printf("The largest number is: %.2f\n", largest);

    return 0;
}

