#include <stdio.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);

    char str[10];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (str[0] == '+' || str[1] == '+')
        {
            ++x;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n", x);
}
