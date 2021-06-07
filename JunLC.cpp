#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <limits.h>
typedef long long ll;

using namespace std;

void solve()
{
	int ans(0), sum(0), cnt(0);

	ll n, m; cin >> n >> m;

	int a[n], right[n], left[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		left[i] = right[i] = INT_MAX;
	}

	int b[m];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	ll f = 0;	
	for (int i = 0; i < n; i++)
	{	
		if (a[i] == 1)
		{
			left[i] = 0;
			f = 1;
		}

		else if (f)
		{
			left[i] = min(left[i], left[i - 1] + 1);
		}
	}

	f = 0;
	for (int i = n; i >= 1; i--)
	{
		if (a[i] == 2)
		{
			right[i] = 0;
			f = 1;
		}

		else if (f)
		{
			right[i] = min(right[i], right[i + 1] + 1);
		}
	}

	for (int i = 0; i < m; i++)
	{
		ll ans = min(right[b[i] - 1], left[b[i] - 1]);

		if (ans == INT_MAX)
			ans = -1;

		if (b[i] == 1)
			ans = 0;

		cout << ans << " ";
	}

	cout << endl;

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