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
	ll n; scll(n);

	ll cnt[11]; for (int i = 0; i < 11; i++) cnt[i] = 0;

	for (int i = 0; i < n; i++)
	{
		ll x; cin >> x;

		cnt[x]++;
	}

	map<int, int> m;
	for (int i = 1; i <= 10; i++) m[cnt[i]]++;

	int ans(0), mx(0);
	for (auto it = m.begin(); it != m.end(); it++)
	{
		// cout << it->first << " " << it->second << endl;
		if (it->second > ans && it->first != 0)
		{
			ans = it->second; 
			mx = it->first;
		}
	}

	cout << mx << endl;
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}