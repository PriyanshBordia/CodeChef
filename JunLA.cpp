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

	ll a, b, Xa, Xb;
	cin >> a >> b >> Xa >> Xb;

	ans = ceil(Xa * 1.0 / a) + ceil(Xb * 1.0 / b);
	
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