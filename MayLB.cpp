#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <vector>
#include <set>
#include <stack>
#include <queue>

typedef long long ll;

using namespace std;

void solve()
{
	ll ans(0), sum(0), cnt(0), mx(-1e18), mn(1e18);

	ll n, k; cin >> n >> k;

	string s; cin >> s;

	for (int i = 1; i < n; i++)
	{
		ans += 1;
		if (s[i] == s[i - 1])
			ans += 1;
	}

	int q[k]; for (int i = 0; i < k; i++) cin >> q[i];

	for (int i = 0; i < k; i++)
	{
		if (k & 1)
		{
			if (s[q[i] - 1] == '0')
				s[q[i] - 1] = '1';
			else
				s[q[i] - 1] = '0';

			if ((q[i] - 2) >= 0)
			{
				if (s[q[i] - 1] == s[q[i] - 2])
					ans += 1;
				else
					ans -= 1;
			}

			if (q[i] < n)
			{
				if (s[q[i] - 1] == s[q[i]])
					ans += 1;
				else
					ans -= 1;
			}
		}

		cout << ans << endl;
	}

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}