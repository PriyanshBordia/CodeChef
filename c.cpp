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
	ll x; scll(x);
	
	// ll i = 1;

	if (x == 1)
		cout << "0 1\n";

	else if (x % 2 == 0)
		cout << x / 2 << " " << x / 2 << endl;

	else
		cout << x << " 0\n";
	
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
