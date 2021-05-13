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

        while ((sum <= x) && (topA < n) && (topB < m))
        {
            if (A[topA] < B[topB])
            {
                sum += A[topA];
                A[topA++] = -1;
                count++;
            }

            else if (A[topA] > B[topB])
            {
                sum += B[topB];
                B[topB++] = -1;
                count++;
            }

            else
            {
                int tempA = topA + 1;
                int tempB = topB + 1;

                while (tempA < n && tempB < m)
                {
                    if (A[tempA] == B[tempB])
                    {
                        tempA++;
                        tempB++;
                    }

                    else if (A[tempA] < B[tempB])
                    {
                        while (topA <= tempA && sum <= x)
                        {
                            sum += A[topA];
                            A[topA++] = -1;
                            count++;
                        }    
                        break;
                    }

                    else
                    {
                        while (topB <= tempB && sum <= x)
                        {
                            sum += B[topB];
                            B[topB++] = -1;
                            count++;
                        }
                        break;
                    }
                }
            }
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
