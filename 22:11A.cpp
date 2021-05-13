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
	
	
	string a; cin >> a;
	string b; cin >> b;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != b[i])
		{
			int j = i;
			while (a[j] != b[j] && j < a.size())
				j += 2;

			for (int k = i; k < j; k += 2)
			{
				a[k] = (a[k] == '0') ? '1' : '0';
			}

			ans++;
		}
	}
	
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
