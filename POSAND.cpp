#include <iostream>
#include <math.h>

typedef long long ll;

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{	
	ll n; cin >> n;

	int i = 2, j(2), k(pow(2, j) - 1);
	while (i <= (log(n) / log(2)))
	{
		cout << k << " ";

		if (k % i != 0) k--;

		else
		{
			i *= 2;
			j++;
			k = pow(2, j) - 1;
		}

	}

	cout << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}