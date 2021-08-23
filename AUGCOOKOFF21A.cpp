#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <limits.h>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;

void solve()
{
	ll ans(0), sum(0), mx(-1e18), mn(1e18);

	ll n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	if (n == 1 or n == 2)
	{
		cout << "0" << endl; 
		return;
	}

	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		m[a[i]]++;

		if (m[a[i]] >= mx)
			mx = m[a[i]];
	}

	if (mx == 1)
		mx = 2;

	cout << n - mx << endl;

	return;
}

int main()
{
	ll t;
	cin >> t;

	while (t--)
		solve();

	return 0;
}