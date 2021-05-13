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

int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if (x == 1 || (x % 2 == 0))
		return 0;
	
	else
	{
		for (int i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}
		
		return 1;
	}
}

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	int k, x; cin >> k >> x;


	ll ans(0), sum(0), cnt[x + 1], mx(0), mn(0);
	
	int i = sqrt(x);
		
	while (i < x)
	{
		if (x % i == 0 && (i % (x / i) != 0) && ((x / i) % i != 0))
			break;

		i++;
	}

	// cout << i << " ";

	sum = i + x / i + k - 2;
	
	ans += (isPrime(i)) ? i : x / i;


	if (k > 2)
	{
		int j = (!isPrime(i)) ? i : x / i;
		
		// cout << j << endl;
		
		i = sqrt(j);

		while (i < j)
		{
			if (j % i == 0 && (i % (j / i) != 0) && ((j / i) % i != 0))
				break;

			i++;
		}

		// cout << i << " ";

		ans += i + j / i + k - 3;

		sum = min(ans, sum);
	}

	pfll(sum);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
