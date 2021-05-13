//A tree lover's tale!

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


struct tree
{
    int start, end;
    char color;
};

int isRed(struct tree Node);
int hasRed(struct tree A[], int a, int b);

int main()
{
    int count = 0;

    int n = 0;
    scanf("%d", &n);

    struct tree arr[n];
    for (int i = 1; i < n; i++)
        scanf("%d %d %c", &arr[i].start, &arr[i].end, &arr[i].color);

    for (int i = 1; i < n; i++)
    {
    	for (int j = i + 1; j < n; j++)
    	{
    		for (int k = j + 1; k <= n; k++)
			{
				if (hasRed(arr, i, j))
				{	
					if (hasRed(arr, j, k))
					{
						count++;
						printf("%d->%d->%d\n", i, j, k);
						// break;
					}
				}
				else
					continue;
			}	
    	}
    }

    // if ()
    // count = count % pow(10, 9) + 7;
    printf("%d\n", count);
    
    return 0;
}

int hasRed(struct tree A[], int a, int b)
{
	for (int i = a; i < b; i++)
	{
		if (isRed(A[i]))
			return 1;
	}

	return 0;
}

int isRed(struct tree Node)
{
	if (Node.color == 'r')
		return 1;
	else
		return 0;
}
