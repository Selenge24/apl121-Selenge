#include <stdio.h>
#include <assert.h>

int digit_sum(int n) {
    if (n < 0) n = -n;
    if (n < 10) return n;
    return n % 10 + digit_sum(n / 10);
}
