#include <stdio.h>
struct Student {
    int roll;
    char name[20];
};
int main() {
    struct Student s;
    struct Student *ptr = &s;
    printf("Enter roll: ");
    scanf("%d", &ptr->roll);
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    return 0;
}
