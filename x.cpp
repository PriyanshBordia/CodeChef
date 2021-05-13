#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n, d; cin >> n >> d;
	
	ll c[n]; for (int i = 0; i < n; i++) cin >> c[i];

	sort (c, c + n);

	double ans(0);
	int z(c[0]);
	for (int i = 1; i < n; i++)
	{
		ans = max(ans, c[i] - c[i - 1] + d);
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}