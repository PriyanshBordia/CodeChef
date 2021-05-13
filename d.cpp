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
	ll n, q; cin >> n >> q;
	
	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	while (q--)
	{
		ll cnt(0), ans(0);

		int x, y; cin >> x >> y;

		// if (a[x - 1] != y)
		{
			a[x - 1] = y;

			int flag(0);
			for (int i = 1; i < n; i++)
			{
				if (a[i] != a[i - 1])
				{
					flag = 1; break;
				}
			}

			if (flag)
			{
				for (int i = 0; i < n; i++)
				{
					cnt++;

					if (i + 1 < n && a[i + 1] == a[i])
					{
						ans = max(ans, cnt);
						cnt = 0;
					}
				}

				ans = max(ans, cnt);
			}
		}

		pfll(ans);
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
	{
		solve();
	}	

	return 0;
}
