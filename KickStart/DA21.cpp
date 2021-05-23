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
	ll t; cin >> t;

	for (int j = 1; j <= t; j++)
	{
		ll n, k, ans = 1; cin >> n >> k;

		string s; cin >> s;
		string t(n, 'a');
		
		if (n == 1)
			ans = s[0] - 'a';

		else if (s == t)
			ans = 0;

		else
		{
			for (int i = 0; i < n / 2; i++)
			{
				ans *= min((s[i] - 'a') + 1, (s[n - i - 1] - 'a') + 1);
			}

			if (n & 1)
			{
				ans = (ans - 1) * k;
				ans += ((s[n / 2] - 'a') + 1);
			}
		}

		cout << "Case #" << j << ": " << ans % int(1e09 + 7) << endl;
	}

	return 0;
}