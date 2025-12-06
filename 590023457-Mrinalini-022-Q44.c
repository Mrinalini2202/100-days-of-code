#include <stdio.h>

int main(void) {
    int n, i;
    float numerator = 1.0, denominator = 2.0, sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}