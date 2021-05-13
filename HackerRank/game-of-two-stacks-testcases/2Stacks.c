#include <stdio.h>
#include <assert.h>

int main()
{
    FILE *ptr = fopen("ans", "w");
    assert (ptr != NULL);

    int g = 0;
    scanf("%d", &g);

    int count = 0;

    for (int i = 0; i < g; i++)
    {
        count = 0;

        int n, m, x;
        scanf("%d %d %d", &n, &m, &x);

        int A[n], topA = 0;
        for (topA = 0; topA < n; topA++)
            scanf("%d", &A[topA]);

        int B[m], topB = 0;
        for (topB = 0; topB < m; topB++)
            scanf("%d", &B[topB]);

        int sum = 0;

        while (sum < x && topA >= 0 && topB >= 0)
        {
            if (A[topA] < B[topB])
            {
                sum += A[topA--];
                count++;
            }

            else if (A[topA] > B[topB])
            {
                sum += B[topB--];
                count++;
            }

            else
            {
                int tempA = topA;
                int tempB = topB;

                while (tempA >= 0 && tempB >= 0)
                {
                    if (A[tempA] == B[tempB])
                    {
                        tempA--;
                        tempB--;
                    }

                    else if (A[tempA] < B[tempB])
                    {
                        sum += A[topA];
                        A[topA--] = -1;
                        count++;
                        break;
                    }

                    else
                    {
                        sum += B[topB];
                        B[topB--] = -1;
                        count++;
                        break;
                    }
                }

                if (tempA < 0)
                {
                    sum += A[topA];
                    count++;
                }

                else if (tempB < 0)
                {
                    sum += B[topB];
                    count++;    
                }
            }
        }

        count--;
        
        if (topA < 0)
        {
            while (sum < x && topB >= 0)
            {
                sum += B[topB--];
                count++;
            }
        }

        else if (topB < 0)
        {
            while (sum < x && topA >= 0)
            {
                sum += A[topA--];
                count++;
            }
        }

        fprintf(ptr, "%d\n", count - 1);
    }

    fclose(ptr);

    return 0;
}
