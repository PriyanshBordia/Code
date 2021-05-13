#include <stdio.h>

int a[1000000];

int maxima(int start, int end)
{
    int max = 0;
    for (int k = start; k <= end; k++)
    {
        if  (a[k] > max)
            max = a[k];
    }
    return max;
}

int main()
{
    long int counter = 0;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d ", &a[i]);


    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
           if ((a[i] * a[j]) <= maxima(i, j))
                counter++;
        }
    }

    printf("%ld", counter);
}
