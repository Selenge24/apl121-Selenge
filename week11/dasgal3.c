#include <stdio.h>
#include <time.h>

long long fib_rec(int n) {
    return n < 2 ? n : fib_rec(n - 1) + fib_rec(n - 2);
}

long long fib_loop(int n) {
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        long long t = a + b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    clock_t t = clock();
    long long r = fib_rec(40);
    printf("fib_rec(40) = %lld, %.3f сек\n", r, (double)(clock() - t) / CLOCKS_PER_SEC);

    t = clock();
    r = fib_loop(40);
    printf("fib_loop(40) = %lld, %.6f сек\n", r, (double)(clock() - t) / CLOCKS_PER_SEC);
    return 0;
}