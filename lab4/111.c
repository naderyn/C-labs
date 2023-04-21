#include <stdio.h>

int main() {
    char str[100], revstr[100];
    unsigned short start = 0, end = 1;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    while (str[end] != '\0')
        end++;

    // backward assignment, starting from the last character
    while (end >= 1) {
        revstr[start] = str[end-1];
        end--;
        start++;
    }

    revstr[start] = '\0';

    printf("The reversed string is: %s", revstr);

    return 0;
}
