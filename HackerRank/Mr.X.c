#include <stdio.h>

struct play
{
    int start;
    int end;
};

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    struct play A[N];
    for (int i = 0; i < N; i++)
        scanf("%d %d", &A[i].start, &A[i].end);
    
    struct play C[M];
    for (int i = 0; i < M; i++)
        scanf("%d %d", &C[i].start, &C[i].end);
    
    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[j].end < C[i].start || A[j].start > C[i].end);

            else
                sum++; 
        }
    }

    printf("%d", sum);
}
