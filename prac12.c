#include <stdio.h>

int main() {
    float side;
    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    float perimeter = 4 * side;
    printf("The perimeter of the square is: %.2f\n", perimeter);

    return 0;
}

