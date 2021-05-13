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
	
	ll n; cin >> n;

	string s; cin >> s;
	string p; cin >> p;

	ll cnt1p(0), cnt0p(0), cnt1s(0), cnt0s(0);

	for (int i = 0; i < s.size(); i++)
	{
		(p[i] == '1') ? cnt1p++ : cnt0p++;
		(s[i] == '1') ? cnt1s++ : cnt0s++;
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] != p[i])
		{
			if (s[i] == '0')
				cnt++;

			else
			{
				cnt--;
				if (cnt < 0)
				{
					no;
					return;
				}
			}
		}
	}

	if (cnt0s == cnt0p && cnt1s == cnt1p)
	{
		yes;
	}

	else
		no;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
