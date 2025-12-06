#include <stdio.h>

int main(void) {
    int num, temp, rem, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        rem = num % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == temp)
        printf("%d is a Strong Number.\n", temp);
    else
        printf("%d is NOT a Strong Number.\n", temp);

    return 0;
}