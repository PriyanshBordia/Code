#include <iostream>
#include <vector>
#include <pair.h>

using namespace std;

void solve()
{
	int n; cin >> n;

	vector< vector < pair<int, int> > x, y;
	
	for (int i = 0; i < n; i++) 
	{
		cin >> x[i] >> y[i];
	}


	int q; cin >> q;

	while (q--)
	{
		char c; int i, x, y;

		cin >> c >> i >> x >> y;

		if (i == '+')
		{
			// for ()
		}
	}
	
	return;
}

int main()
{
	int t = 1; //cin >> t;

	while (t--)
		solve();

	return 0;
}