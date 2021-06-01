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

	ll a, b, c, d, K; cin >> a >> b >> c >> d >> K;

	if (((abs(a - c) + abs(b - d)) - K <= 0) && ((abs(a - c) + abs(b - d)) - K) % 2 == 0)
		cout << "YES\n";

	else
	{
		cout << "NO\n";
	}
	
	// int a[n]; for (int i = 0; i < n; i++) cin >> a[i];


	// for (int i = 0; i < n; i++)	
	// {

	// }

	// string s; cin >> s;
	// for (int i = 0; i < s.size(); i++)
	// {

	// }

	// cout << ans << endl;

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