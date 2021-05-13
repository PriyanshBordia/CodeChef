#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll ans(0), sum(0), cnt(0), mx(-1e18), mn(1e18);

	ll n; cin >> n;

	ll a[n]; for (ll i = 0; i < n; ++i) cin >> a[i];
	
	sort(a, a + n);

	ans = abs(a[0] - a[n - 1]);

	if (n & 1)
	{
		ans += abs(a[n / 2] - a[0]) + abs(a[n / 2] - a[n - 1]);
	}

	else
	{
		ans += max(abs(a[n / 2] - a[0]) + abs(a[n / 2] - a[n - 1]), abs(a[n / 2 - 1] - a[0]) + abs(a[n / 2 - 1] - a[n - 1]));
	}

	cout << ans << endl;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}