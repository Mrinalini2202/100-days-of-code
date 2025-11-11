#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (strchr("AEIOUaeiou", str[i]) == NULL) {  
            result[j++] = str[i];
        }
    }

    result[j] = '\0';  

    printf("String without vowels: %s", result);

    return 0;
}
