
// Sample code to perform I/O:
#include <stdio.h>

int a, b;
int n;

int main()
{
	scanf("%d %d", &a, &b);
	
	int factor = 1;
	
	if (a < b)
	    n = a / 2;
	else
    	n = b / 2;
    if (a % 2 != 0 || b % 2 != 0)	
    {
        for (int i = 3; i <= n; i += 2)
        {
          
            if (a % i == 0 && b % i == 0)
                factor++;
    	}
    }
    
    else 
    {
        factor++;
        for (int i = 3; i <= n; i++)
        {
          
            if (a % i == 0 && b % i == 0)
                factor++;
    	}    
    }
	printf("%d\n", factor);       // Writing output to STDOUT
}

