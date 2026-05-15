#include<stdio.h>

int main() {
    int M, N, max=0;
    scanf("%d%d", &M, &N);

    max = (M * N) / 2;

    printf("%d\n", max);
    return 0;
}