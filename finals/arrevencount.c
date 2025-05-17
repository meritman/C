#include <stdio.h>

int filter_odd(int arr[20]) {
    int oddarr[20], count = 0;

    for (int i = 0; i < 12; i++) {
        if (arr[i] % 2 != 0) {
            oddarr[count] = arr[i];
            count++;
        }
    }

    // Printing the filtered odd numbers
    printf("Odd numbers: ");
    for (int j = 0; j < count; j++) {
        printf("%d ", oddarr[j]);
    }
    printf("\n");

    return count;
}

void countdisplay(int count) {
    printf("Count is %d\n", count);
}

int main() {
    int arr[20];
    printf("Enter 12 values for the list:\n");
    for (int i = 0; i < 12; i++) {
        printf("Enter the %dth element: ", i);
        scanf("%d", &arr[i]);
    }

    int count = filter_odd(arr);
    countdisplay(count);

    return 0;
}
