#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

using namespace std;

int isVaid(string s[], int size, string a)
{
	for (int i = 0; i < size; i++)
	{
		if (s[i] == a)
			return 0;
	}

	return 1;
}

void solve()
{
	ll ans(0), sum(0), cnt(0), mx(-1e18), mn(1e18);

	ll n; cin >> n;

	string s[n]; for (int i = 0; i < n; ++i) cin >> s[i];

	for (int i = 0; i < n; ++i)
	{
		string t = s[i].substr(1, s[i].size() - 1);

		for (int j = i + 1; j < n; ++j)
		{				
			string r = s[j].substr(1, s[j].size() - 1);

			if (t != r && s[i][0] != s[j][0] && isVaid(s, n, s[j][0] + t) && isVaid(s, n, s[i][0] + r))
				cnt++;
		}
	}

	cout << 2 * cnt << endl;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}