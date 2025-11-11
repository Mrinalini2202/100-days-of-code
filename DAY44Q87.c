#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int spaces = 0, digits = 0, special = 0, i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
            special++;
        }
        i++;
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);
    return 0;
}
