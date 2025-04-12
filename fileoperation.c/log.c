#include <stdio.h>

int main() {
    FILE *log = freopen("crashlog.txt", "w", stderr); // Redirect stderr to file

    if (log == NULL) {
        printf("Bruh, couldn’t open log file 💀\n");
        return 1;
    }

    fprintf(stderr, "🔥 This error is going straight into the log file!\n");
    int *ptr = NULL;
    if (!ptr) {
        fprintf(stderr, "💥 Null pointer! Send help!\n");
    }

    return 0;
}
