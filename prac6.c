#include <stdio.h>
#include <math.h> 
int isPerfectSquare(int num) {
    if (num < 0) {
        return 0; 
    }
    if (num == 0) {
        return 1; 
    }
    long long root = (long long)sqrt(num); 
    return (root * root == num);
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) == 1) {
        if (isPerfectSquare(number)) {
            printf("%d is a perfect square.\n", number);
        } else {
            printf("%d is not a perfect square.\n", number);
        }
    } else {
        printf("Invalid input. Please enter an integer.\n");
    }

    return 0;
}
