#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>

typedef long long ll;

using namespace std;

void solve()
{
	ll ans(0), cnt(0), mx(-1e18), mn(1e18);

	vector<ll> sum;

	ll n, k; cin >> n >> k;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	ll tsum = 0;

	for (int j = 0; j < k; j++)
		tsum += a[j];

	sum.push_back(tsum);

	for (int i = k; i < n; ++i)
	{
		tsum = tsum - a[i - k] + a[i];
		sum.push_back(tsum);
	}

	for (int i = 0; i < sum.size(); ++i)
		cout << sum[i] << " ";

	cout << endl;

	return;
}

// k = 3
// 1 2 3  5 6 7 8 9 10

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}