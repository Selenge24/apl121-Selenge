#include <stdio.h>

void countdown(int n) {
    if (n == 0) {
        printf("Go!\n");
        return;
    }
    printf("%d\n", n);
    countdown(n - 1);
}

int main(void) {
    countdown(5);
    return 0;
}