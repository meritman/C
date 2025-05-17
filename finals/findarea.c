#include <stdio.h>
#define PI 3.15

int main() {
    int choice;
    printf("Find the area of:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: { // Circle
            float r;
            printf("Enter the radius: ");
            scanf("%f", &r);
            float area = PI * r * r;
            printf("Area of Circle = %.2f\n", area);
            break;
        }
        case 2: { // Square
            float side;
            printf("Enter the side length: ");
            scanf("%f", &side);
            float area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;
        }
        case 3: { // Rectangle
            float length, width;
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            float area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
