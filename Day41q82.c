#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }
    int count = 0;
    while(str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}