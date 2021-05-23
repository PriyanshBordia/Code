#include <iostream>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <vector>
#include <map>
#include <set>

typedef long long ll;

using namespace std;

int main()
{
	ll t; cin >> t;

	for (ll i = 0; i < t; i++)
	{
		ll n; cin >> n;

		ll a[n]; for (ll i = 0; i < n; i++) cin >> a[i];

		ll ans(2), cnt(2), diff(a[1] - a[0]);

		for (int i = 2; i < n; i++)
		{
			if ((a[i] - a[i - 1]) == diff)
			{
				cnt++;
			}

			else
			{
				ans = max(ans, cnt);
				cnt = 2;

				diff = a[i] - a[i - 1];
			}

		}

		ans = max(ans, cnt);

		printf("Case #%lld: %lld\n", i + 1, ans);
	}

	return 0;
}