#include <stdio.h>

// Complete the hourglassSum function below.
int hourglassSum(int arr[6][6])
{
    int sum[4][4];
    int max = -100;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i][j] = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (sum[i][j] > max)
                max = sum[i][j];
        }
    }

    return max;
}

int main()
{
    int arr[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            scanf("%d", &arr[i][j]);
    }

    int result = hourglassSum(arr);

    printf("Ans: %d\n", result);
}
