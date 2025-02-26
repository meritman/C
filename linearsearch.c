#include <stdio.h>

void main() {
    int arr[10] = {10, 20, 30, 1, 4, 67, 0, 0, 0, 0}, search, pos = -1;
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (int i = 0; i < 10; i++) {
        if (search == arr[i]) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        printf("Found at %dth position\n", pos);
    } else {
        printf("Not found\n");
    }
}