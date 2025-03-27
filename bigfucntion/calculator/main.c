#include <stdio.h>
#include "calculate.h"

int main() {
    int a = 10, b = 5;

    printf("Add: %d\n", add(a, b));
    printf("Subtract: %d\n", sub(a, b));
    printf("Multiply: %d\n", multi(a, b));

    return 0;
}
