//program to calculate happy meter
//Priyansh Bordia

#include <stdio.h>

int main()
{
    int n;                      //use input array size
	printf("Array size: ");
    scanf("%d", &n);
         int No[n];
        for(int i = 0; i < n; i++)
        {
            printf("%d: ", i + 1); 		   
            scanf("%2d", &No[i]);       //input arrray elements
        }
        for (int i = 0; i < n; i++)
        {
            int pos = i;
            int Min = No[i];
            
            for (int j = i; j < n; j++)
            {
                if (No[j] < Min)
                {
                    Min = No[j];
                }
            }
        }
        int Happiness = 0;
        int k = n;
        if (n%3 == 1 || n%3 == 2)
            k = k - 1;
            
        for (int i = k; i > 0; i -= 1)
        {
            Happiness += No[i]*No[i+1]*No[i+2];
        }
        printf("\n%d", Happiness);
}
