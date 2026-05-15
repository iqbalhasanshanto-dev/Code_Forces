#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[105], s2[105];

    scanf("%s", s1);
    scanf("%s", s2);

    // Convert both strings to lowercase
    for (int i = 0; s1[i] != '\0'; i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    int result = strcmp(s1, s2);

    if (result < 0)
        printf("-1\n");
    else if (result > 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}