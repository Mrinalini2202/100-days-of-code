#include <stdio.h>
#include <math.h>

int main(void) {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // get last digit
    digits = (int)log10(num);  // count of digits - 1
    first = num / pow(10, digits);  // get first digit

    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    swapped = last * pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}