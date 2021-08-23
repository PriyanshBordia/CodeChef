#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <limits.h>
#include <vector>
#include <set>
#include <stack>
#include <queue>

typedef long long ll;

using namespace std;

void solve()
{
	ll ans(0), sum(0), cnt(0), mx(-1e18), mn(1e18);

	ll n; cin >> n;

	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		v.push_back(s);
	}
	
	string t;
	for (int i = 0; i < v.size(); i++)
	{
		t += ((v[i][i] == '0') ? '1' : '0');
	}

	cout << t << endl;

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