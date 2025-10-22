#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int vowels = 0, consonants = 0, i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
