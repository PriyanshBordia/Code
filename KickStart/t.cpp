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
		ll g00, g01, g02; cin >> g00 >> g01 >> g02;
		ll g10, g11, g12; cin >> g10 >> g12;
		ll g20, g21, g22; cin >> g20 >> g21 >> g22;

		int a = min(g00, g22) + abs(g22 - g00) / 2;
		int b = min(g10, g12) + abs(g12 - g10) / 2;
		int c = min(g20, g02) + abs(g20 - g02) / 2;
		int d = min(g21, g01) + abs(g21 - g01) / 2;


		cout << "Case #" << j << ": " << ans % int(1e09 + 7) << endl;
	}

	return 0;
}