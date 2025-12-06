#include <stdio.h>
int main(void) {
    int i, j, k;
    // Upper half
    for(i = 1; i <= 4; i++) {
        for(j = i; j < 4; j++) {
            printf(" ");
        }
        for(k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for(i = 3; i >= 1; i--) {
        for(j = 4; j > i; j--) {
            printf(" ");
        }
        for(k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}