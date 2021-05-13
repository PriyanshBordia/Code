#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

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

	int divisor;
	int num = 0;
	int num1 = 0, num2 = 0; 

	for (int i = 0 ; i < div; i++)
	{
		divisor = log10(A[i]);

		if (i % 2 == 0)
		{
			num1 += (A[i] / pow(10, divisor));
			num2 += (A[(n-1) - i] % 10);
		}
		else 
		{
			num2 += (A[i] / pow(10, divisor)); 
			num1 += (A[(n-1) - i] % 10);
	}

	num = abs(num1 - num2);

	if (num % 11 == 0) 
		cout << "OUI\n";
	else 
		cout << "NON\n";

	return 0;
}

	
