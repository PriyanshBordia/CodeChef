#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <limits.h>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

void solve()
{
	set<ll> st;

	ll ans(0), sum(0), cnt(1), mx(-1e18), mn(1e18);

	ll n; cin >> n;

	int a[n]; 
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		st.insert(a[i]);
	}

	sort(a, a + n);

	ans = a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		ans *= a[i];

		if (ans > a[n - 1] or ans < a[0] or st.find(ans) == st.end())
		{
			cout << 0 << endl;
			return;
		}
	}

	cout << 1 << endl;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}