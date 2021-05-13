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

	ll pos[100], w[n + 1]; 
	for (ll i = 1; i <= n; ++i) 
	{
		cin >> w[i];

		pos[w[i]] = i;
	}

	ll l[100]; 
	for (ll i = 1; i <= n; ++i) 
	{
		int k; cin >> k;

		l[w[i]] = k;
	}

	if (pos[1] >= pos[2])
	{
		ans += ceil((pos[1] + 1 - pos[2]) * 1.0 / l[2]);

		pos[2] += ceil((pos[1] + 1 - pos[2]) * 1.0 / l[2]) * l[2]; 
	}

	// cout << ans << endl;

	if (n > 2 && pos[2] >= pos[3])
	{
		ans += ceil((pos[2] + 1 - pos[3]) * 1.0 / l[3]);

		pos[3] += ceil((pos[2] + 1 - pos[3]) * 1.0 / l[3]) * l[3];
	}

	// cout << ans << endl;
	
	if (n > 3 && pos[3] >= pos[4])
	{
		ans += ceil((pos[3] + 1 - pos[4]) * 1.0 / l[4]);

		pos[4] += ceil((pos[3] + 1 - pos[4]) * 1.0 / l[4]) * l[4];
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