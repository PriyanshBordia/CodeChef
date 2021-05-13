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
	ll n, k; cin >> n >> k;
	
	ll w[n]; for (int i = 0; i < n; i++) cin >> w[i];

	ll wght(0), trip(0);
	for (int i = 0; i < n; i++)
	{
		if (w[i] > k)
		{
			cout << "-1\n";
			return;
		}

		else if ((wght + w[i]) > k)
		{
			trip++;
			wght = 0;
		}
		
		wght += w[i];
	}

	if (wght > 0 && wght <= k)
		trip++;

	cout << trip << endl;

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();

	return 0;
}
