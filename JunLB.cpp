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
	ll ans(0), sum(0), cnt(0);

	ll c, d, p, q; cin >> c >> d >> p >> q;

	ans += p * c;
	cnt = c / d;
	// cout << ans << endl;

	ans += q * (cnt * (cnt - 1) / 2) * d;
	// cout << ans << endl;

	ans += q * (cnt) * (c % d);
	// cout << ans << endl;

	cout << ans << endl;

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

// 2 1 p q
// cnt = 2
// ans = 2p + q
// 1 - p
// 2 - p + q
