#include <stdio.h>

int string_length(char s[]);

int main(void)
{
    char name[100];

    printf("Name: ");
    scanf("%s", name);

    int len = string_length(name);
    printf("%d\n", len);

    return 0;
}

int string_length(char s[])
{
    int count = 0;

    while (s[count] != '\0')
    {
        count++;
    }

    return count;
}

