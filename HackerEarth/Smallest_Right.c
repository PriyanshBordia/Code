#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        printf("Array Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                if (arr[j] < arr[ans[index]])
                    ans[index] = j;
            }
            else
                ans[i] = -1;
        }
         printf("%2d", ans[i]);
    }
    printf("\n");

}