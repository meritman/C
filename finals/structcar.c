#include <stdio.h>
#include <stdlib.h>

struct vehicle {
    char brand[20];
    float price;
};

int main() {
    int n;
    printf("Enter the no of brands to be added");
    scanf("%d",&n);
    struct vehicle v[n];

    // Input for 10 vehicles
    for (int i = 0; i < n; i++) {
        printf("Enter brand of vehicle %d: ", i + 1);
        scanf("%s", v[i].brand);
        printf("Enter price of vehicle %d: ", i + 1);
        scanf("%f", &v[i].price);
    }

    // Find vehicle with highest price
    int maxIndex = 0;
    for (int i = 1; i < n+1; i++) {
        if (v[i].price > v[maxIndex].price) {
            maxIndex = i;
        }
    }

    // Display the result
    printf("\nThe highest priced vehicle is: %s\n", v[maxIndex].brand);
    return 0;
}
