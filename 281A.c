#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    puts(str);
}