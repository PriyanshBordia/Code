#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int N = 0;
    scanf("%d", &N);

    int X[N];
    int W[N];

    for (int i = 0; i < N; i++)
        scanf("%d ", &X[i]);
    for (int i = 0; i < N; i++)
        scanf("%d", &W[i]);

    float mean = 0;
    int deno = 0;
    for (int i = 0; i < N; i++)
    {
        mean += X[i]*W[i];
        deno += W[i]; 
    }    

    mean = mean / deno;
    printf("%.1f", mean);
    return 0;
}
