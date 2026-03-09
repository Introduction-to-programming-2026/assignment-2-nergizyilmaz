#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    fgets(s, sizeof(s), stdin);

    printf("After: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }

    return 0;
}