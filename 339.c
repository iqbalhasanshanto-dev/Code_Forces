#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '1')
            count1++;
        else if (s[i] == '2')
            count2++;
        else if (s[i] == '3')
            count3++;
    }

    int first = 1;

    while (count1--)
    {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }

    while (count2--)
    {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }

    while (count3--)
    {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }

    return 0;
}