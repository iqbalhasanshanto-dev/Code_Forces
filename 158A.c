#include <stdio.h>

int main()
{
    int n, k, count = 0;
    scanf("%d%d", &n, &k);

    int arr[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int cutoff = arr[k - 1]; // k-th student
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= cutoff && arr[i] > 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
}