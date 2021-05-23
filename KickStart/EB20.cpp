#include <iostream>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
	ll t; cin >> t;

	for (ll p = 1; p <= t; p++)
	{
		ll n, c, a, b; cin >> n >> a >> b >> c;

		vector <int> v;
		
		int cnt(0);
		for (int i = 2; cnt < (a - c); i++)
		{
			v.push_back(i);
			cnt++;
		}

		for (int i = 1; i <= c; i++)
			v.push_back(n);

		for (int cnt = 0; cnt < (n - (b - c) - (a - c) - c); cnt++)
		{
			v.push_back(1);
		}

		cnt = 0;
		for (int i = n - 1; cnt < (b - c); i--)
		{
			v.push_back(i);
			cnt++;
		}


		printf("Case #%lld: ", p);

		if ((a + b > n + 1 && c != n) || v.size() != n)
			cout << "IMPOSSIBLE\n";

		else
		{
			for (int j = 0; j < v.size(); j++)
				cout << v[j] << " ";
			cout << endl;
		}	
	}

	return 0;
}