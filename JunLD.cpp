#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <vector>

typedef long long ll;
const ll MOD = 1e09 + 7;

using namespace std;

int power(int a, int b)
{
	if (b == 0)
		return 1;

	if (b == 1)
		return a;
	
	ll t = power(a, b / 2);
	t = (t * t) % MOD; 
	
	if (b % 2)
		return a * t % MOD;
	
	return t;
}

void solve()
{
	ll ans(1), sum(0), cnt(1), mx(-1e18), mn(1e18);

	ll n, m; cin >> n >> m;

	cnt = power(2, n) - 1;
	ans = power(cnt, m);

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