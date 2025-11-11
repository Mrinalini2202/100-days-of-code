#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') i++;
    printf("Count=%d\n", i);
    return 0;
