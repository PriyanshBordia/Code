#include <iostream>
#include <cstring>

typedef long long ll;

using namespace std;

int main()
{
	ll n, q; cin >> n >> q;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	ll sum[n];
	for (int i = 0; i < n; i++)
	{
		string s = to_string(a[i]);

		sum[i] = 0;
		for (int j = 0; j < s.size(); j++)
		{
			sum[i] += int(s[j] - '0');
		}
	}

	// for (int i = 0; i < n; i++)
	// 	cout << sum[i] << endl;

	while (q--)
	{
		ll in; cin >> in;

		int flag(0);
		for (int j = in; j < n; j++)
		{
			if (sum[j] < sum[in - 1] && a[j] > a[in - 1])
			{
				cout << j + 1 << endl;
				flag = 1;
				break;
			}
		}

		if (!flag)
			cout << "-1\n";
	}

	return 0;
}