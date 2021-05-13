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
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n, m, k; cin >> n >> m >> k;

	int w[n][k];

	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < k; j++)
		{
			cin >> w[i][j];
			sum += w[i][j];
		}

		cin >> mx;

		if (sum >= m && mx <= 10)
			ans++;
	}
	
	pfll(ans);

	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}
