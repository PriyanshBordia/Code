#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int j = 1; j <= t; j++)
	{
		ll g; cin >> g;

		ll cnt = 0;
		for (int k = 1; k <= g; k++)
		{
			ll sum = (k * (k - 1) / 2);

			for (int i = 1; i <= g; i++)
			{
				if (((k + i) * (k + i - 1) / 2) - sum == g)
					cnt++;
			}
		}

		cout << "Case #" << j << ": " << cnt << endl;
	}

	return 0;
}