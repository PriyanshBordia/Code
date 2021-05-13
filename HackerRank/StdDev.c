#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int N = 0;
    scanf("%d", &N);

    float mean = 0;
    float std_dev = 0;

    int X[N];
    for (int i = 0; i < N; i ++)
    {
        scanf("%d", &X[i]);
        mean += X[i];
    }

    mean /= N; 

    for (int i = 0; i < N; i++)
    {
        std_dev += pow((mean - X[i]), 2);
    }

    std_dev /= N;
    std_dev = pow(std_dev, 0.5);

    printf("%.1f", std_dev);
    return 0;
}
