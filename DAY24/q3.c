#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000];
    int maxLen = 0, start = 0, len;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            len = i - start;

            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, str + start, len);
                longest[len] = '\0';
            }

            start = i + 1;
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}