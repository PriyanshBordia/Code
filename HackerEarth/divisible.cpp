#include <iostream>
#include <math.h>

using namespace std;

int digit(int x);

int main()
{
	int n;
	cin >> n;

	int A[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	int div =  n / 2;  //the middle pont of array
	int dig[n];
	int num = 0;
	for (int i = 0 ; i < div; i++)
	{
		dig[i] = digit(A[i]);
		dig[n-i-1] = A[n-i-1] % 10;

		num += dig[i] * pow(10, n - i - 1) + dig[n-i-1] * pow(10, i);
	}

	if (num % 11 == 0) 
		cout << "OUI\n";
	else 
		cout << "NON\n";

	return 0;
}

int digit(int x)
{
	int i = 1;
	int rem = 1;
	while (rem != 0)
	{
		rem = x / pow(10, i);
		i++;
	}

	rem = x / pow(10, i-2);
	return rem;
}
