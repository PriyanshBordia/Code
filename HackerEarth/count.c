//program to count the number of numbers occuring after and before the equal to it.
#include <stdio.h>

const long long int N = 1e6 + 2;

int main()
{

    long long int n = 0;
        scanf("%lld", &n);
    
    long long int A[N];
    
    for (int i = 0; i < n ; i++)
        scanf("%lld", &A[i]);
    
    long long int B[N];
    for (int j = 0; j < n; j++)
    {
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if ((A[i] == A[j]) && (j < i))
                x++;
            else if ((A[i] == A[j]) && (j > i))
                y++;
        }
        B[j] = x - y;
    }
    for (int i = 0; i < n ; i++)
        printf("%lld ", B[i]);
}
