#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	int i = 0, ans(0), k(0); 

	while (i < n)
	{
		if (i + a[i] + 1 >= n)
		{
			ans += a[i] - (n - i);
			break;
		}
		
		else
		{
			i += a[i] + 1;
			k++;
		}
	}

	ans += (n - k);

	cout << ans << endl;

	return 0;
}