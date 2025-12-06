#include <stdio.h>

int main() {
    int num, n;
    int binary[32];  
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    n = num;
    while (n > 0) {
        binary[i] = n % 2;  
        n = n / 2;
        i++;
    }

    printf("Binary of %d = ", num);
    for (i = i - 1; i >= 0; i--) {  
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}