#include <stdio.h>
#include <math.h>  
double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    double a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        double area = calculateArea(a, b, c);
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The entered values do not form a valid triangle.\n");
    }

    return 0;
}

