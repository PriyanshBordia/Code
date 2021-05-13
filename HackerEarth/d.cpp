#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll sum(0), ans(0);

	ll n; cin >> n;

	ll l[n]; for (int i = 0; i < n; i++) cin >> l[i]; 
	ll r[n]; for (int i = 0; i < n; i++) cin >> r[i]; 

	ll c[n];
	for (int i = 0; i < n; i++)
	{
		ans += n * r[i] - l[i];
		c[i] = l[i] - r[i];
	}

	sort (c, c + n);

	for (int i = 0; i < n; i++)
		ans += c[i] * (n - i);


	cout << ans << "\n";

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int	 t; cin >> t;

	while (t--)
		solve();

	return 0;
}