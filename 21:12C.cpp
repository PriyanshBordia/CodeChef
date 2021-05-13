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
	
	string s; cin >> s;

	int n = s.size();

	if (n & 1)
	{
		cout << "-1\n";
		return;
	}

	int z(0), o(0);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
			z++;
		else
			o++;
	}

	if (z == o)
		cnt = 0;

	else if (z == n || o == n)
		cnt = -1;

	else
		cnt = min(n / 2 - min(z, o), max(z, o) - n / 2);

	pfll(cnt);
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}