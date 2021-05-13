#include <iostream>
#include <math.h>

typedef long long ll;

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n, k; cin >> n >> k;

	ll q[n + 1]; q[0] = 0;
	for (int i = 1; i <= n; i++) 
	{
		ll a; cin >> a;
		q[i] = q[i - 1] + a;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		if ((q[i] - i * k) < 0)	
		{
			cout << i << endl;
			return;
		}
	}

	cout << q[n] / k + 1 << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}