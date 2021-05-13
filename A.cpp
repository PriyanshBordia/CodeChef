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
	ll n; cin >> n;
	

	vector<string> s;

	string t(1000000, 'z');
	string r(1, 'a');

	int ti(0), ri(0);

	for (int i = 0; i < n; ++i)
	{
		string k;
		cin >> k;
		s.push_back(k);
	}

	for (int i = 0; i < n; ++i)
	{
		if (s[i].compare(t) <= 0)
		{
			ti = i + 1;
			t = s[i];
		}

		if (s[i].compare(r) >= 0)
		{
			ri = i + 1;
			r = s[i];
		} 
	}

	cout << t << " "<< r << endl;

	ll q; cin >> q;

	while (q--)
	{
		ll m; cin >> m;

		if (m == 1)
		{
			int x; char c;  cin >> x >> c;

			s.push_back(s[x - 1] + c);

			if (s[s.size() - 1].compare(t) <= 0)
			{
				t = s[s.size() - 1];
				ti =  s.size();
			}

			
			if (s[s.size() - 1].compare(r) >= 0)
			{
				ri = s.size();
				r = s[s.size() - 1];
			}

		}

		else if (m == 2)
			cout << ti << endl; 
	
		else if (m == 3)
			cout << ri << endl;
	}

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
	{
		solve();
	}	

	return 0;
}
