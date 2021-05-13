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
	
	ll two(0), one(0), cnt[26], three(0), mx(-1), mn(1000000000);
	
	for (int i = 0; i < 26; ++i)
	{
		cnt[i] = 0;
	}
	
	string s; cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		cnt[s[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; ++i)
	{
		three += cnt[i] / 3;

		if (cnt[i] % 3 == 1)
			one++;

		else if (cnt[i] % 3 == 2)
			two++;
	}

	ll x = min(two, one);
	ll y = min(three * 3 / 2, one);
// 3 + (0, 0) + (0 - min()
	
	ll t = x + three + ((two - x) * 2) / 3;
	ll z = y + min(two, one - y) + max(ll(0), ((two - min(two, one - y)) * 2) / 3) + (three * 3 - 2 * y) / 3;

	ll ans = max(t, z);

	pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
