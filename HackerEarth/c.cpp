#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	if (n == 1)
	{
		cout << "-1\n-1\n-1\n-1\n";
		return 0;
	}

	if (n & 1)
		cout << (n + 1) << endl;
	else
		cout << n << endl;

	int i = 1; 
	while (i < n)
	{
		if (i == n - 2)
		{
			cout << n << " " << n - 2 << " " << n - 1;
			break;
		}

		else
			cout << i + 1 << " " << i << " ";

		i += 2;
	}

	cout << endl;

	if (n % 2 == 0)
	{
		cout << (n * n) / 2 << endl;

		for (int i = n / 2 + 1; i <= n; i++)
			cout << i << " ";

		for (int i = 1; i <= n / 2; i++)
			cout << i << " ";
	}

	else
	{
		cout << 2 * (n / 2) * (n / 2 + 1)<< endl;

		for (int i = n / 2 + 1; i <= n; i++)
			cout << i << " ";

		for (int i = 1; i <= n / 2; i++)
			cout << i << " ";
	}
	
	cout << endl;

	return 0;
}