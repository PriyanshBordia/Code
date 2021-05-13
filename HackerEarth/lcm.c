// Sample code to perform I/O:
#include <stdio.h>

int prime(int t);
int lcm(int a, int b);

int main()
{
	int n;
	scanf("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++)
    {
        printf("No[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
    
	int max = 0;
    int temp;
    
	for (int i = 0; i < n - 1; i++)
	{
        if (prime(a[i]) || prime(a[i+1]))
            temp = a[i] * a[i+1];
    
        else
            temp = lcm(a[i], a[i+1]);
            
        if (temp > max)
            max = temp;
	}
	
//	max = max % pow(10, 9) + 7;
	printf("Ans: %d\n", max);

}

int prime(int t)
{
    int count = 0;
    for (int i = 2; i < t / 2; t++)
    {
        if (t % i == 0)
            count++;
    }
    
    if (count == 0)
        return 1;
    else
        return 0;
    
}

int lcm(int a, int b)
{
    int i = 2;
//    int n = (a % i + b % i);
//    i++;
    while (a % i == 0 && b % i == 0)
    {
//        n = ();
        i++;
    }
    
    return i;
}

