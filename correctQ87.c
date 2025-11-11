#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (!isalpha(str[i]) && str[i] != '\n') {
            special++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
