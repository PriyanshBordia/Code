#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve(int t)
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	v.pb(0);
	for (int i = 1; i <= n; i++)
	{
		ll a; 
		cin >> a;
		v.pb(a);
	}
	
	for (ll i = 1; i < n; i++)
	{
		ans += 1; cnt = i;
		for (int j = i; j <= n; j++)
		{
			if (v[j] < v[cnt])
			{	
				cnt = j;
			}
		}

		sort(v.begin() + i, v.begin() + cnt + 1);
		ans += cnt - i;
	}

	// for (int i = 1; i <= n; i++)
	// 	cout << v[i] << " ";
	// cout << endl;
	cout << "Case #" << t << ": " << ans << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	for (int i = 1; i <= t; i++)
		solve(i);

	return 0;
}
