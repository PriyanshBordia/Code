#include <stdio.h>
#include <assert.h>

int main()
{
    FILE *ptr = fopen("ans", "w");
    assert (ptr != NULL);

    int g = 0;
    scanf("%d", &g);

    for (int k = 0; k < g; k++)
    {
        int count = 0;

        int n, m, x;
        scanf("%d %d %d", &n, &m, &x);

        int A[n], topA = 0, i;
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);

        int B[m], topB = 0;
        for (int j = 0; j < m; j++)
            scanf("%d", &B[j]);

        int sum = 0;
        int tp_count = 0;

        int C[m], topC = 0;
        while (sum <= x)
        {
            C[topC] = B[topC];
            topC++:
        }

        while (topA < n && topB < m)
        {
            topB
        }

//when one of the stack is empty 
        if (topA >= n)
        {
            while (sum <= x && topB < m)
            {
                sum += B[topB];
                B[topB++] = -1;
                count++;
            }
        }

        else if (topB >= m)
        {
            while (sum <= x && topA < n)
            {
                sum += A[topA];
                A[topA++] = -1;
                count++;
            }
        }

        count--;
        fprintf(ptr, "%d\n", count);
        // fprintf(ptr, "TopA: %d  TopB: %d  %d\n", topA, topB, count);
        // printf("%d\n", count);
    }

    fclose(ptr);

    return 0;
}

// printf("TopA: %d\n", topA);
// printf("TopB: %d\n", topB);
