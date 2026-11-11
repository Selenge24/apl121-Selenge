#include <stdio.h>
#include <assert.h>

int digit_sum(int n) {
    if (n < 0) n = -n;
    if (n < 10) return n;
    return n % 10 + digit_sum(n / 10);
}

double power(double base, int exp) {
    if (exp < 0) return 1.0 / power(base, -exp);
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main(void) {
    assert(digit_sum(0) == 0);
    assert(digit_sum(9) == 9);
    assert(digit_sum(-123) == 6);
    assert(power(2, 0) == 1);
    assert(power(0, 0) == 1);
    assert(power(2, -3) == 0.125);
    printf("Bugd zov baina\n");
    return 0;
}