#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <limits.h>
#include <vector>
#include <set>
#include <stack>
#include <queue>

typedef long long ll;

using namespace std;


void solve()
{
	ll ans(0), sum(0), cnt(0), mx(-1e18), mn(1e18);

	ll n, q; cin >> n >> q;

	ll a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	sort(a, a + n);

	while (q--)
	{
		ll x; cin >> x;

		bool z = false;

		ll p = 0, r = n - 1;
		while (p <= r)
		{
			ll mid = (p + r) / 2;
			
			if (a[mid] == x)
			{
				cout << "0" << endl;
				z = true;	
				break;
			}

			else if (a[mid] > x)
				r = mid - 1;

			else if (a[mid] < x)
				p = mid + 1;
		}

		if (!z)
		{
			if ((n - r) & 1)
				cout << "POSITIVE" << endl;

			else
				cout << "NEGATIVE" << endl;
		}
	}

	return;
}

int main()
{
	solve();

	return 0;
}