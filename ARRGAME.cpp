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
#define yes printf("Yes\n")
#define no printf("No\n")

using namespace std;

void solve()
{
	ll n; cin >> n;
	
	ll c[n]; for (int i = 0; i < n; i++) cin >> c[i];

	int ans(0), cnt(0), prev(0);
	for (int i = 0; i < n; i++)
	{
		if (c[i])
		{
			if (cnt > ans)
			{
				prev = ans;
				ans = cnt;
			}

			else if (cnt > prev)
				prev = cnt;

			cnt = 0;
		}

		else
			cnt++;
	}

	if (ans / 2 < prev)
		no;

	else
	{
		(ans & 1) ? yes : no;
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}