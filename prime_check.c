#include <stdio.h>
int main() {
    int n = 7, isPrime = 1;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    if (isPrime) printf("%d is Prime\n", n);
    else printf("%d is Not Prime\n", n);
    return 0;
}
