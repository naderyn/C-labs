#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c))
    printf("%c is an alphabet.", c);
else
    printf("%c is not an alphabet.", c);

    return 0;
}
