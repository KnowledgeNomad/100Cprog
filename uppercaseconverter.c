#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]; ++i)
        str[i] = toupper(str[i]);

    printf("Uppercase string: %s\n", str);
    return 0;
}
