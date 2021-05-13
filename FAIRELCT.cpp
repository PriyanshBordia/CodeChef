#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll suma(0), sumb(0), cnt(0);

	ll n, m; cin >> n >> m;

	ll a[n]; for (int i = 0; i < n; ++i) { cin >> a[i]; suma += a[i]; }
	ll b[m]; for (int i = 0; i < m; ++i) { cin >> b[i]; sumb += b[i]; }

	sort(a, a + n);
	sort(b, b + m);

	ll i = 0, j = m - 1;
	while (i < n && j >= 0 && a[i] < b[j] && suma <= sumb)
	{
		suma = suma - a[i] + b[j];
		sumb = sumb - b[j] + a[i];

		cnt++;

		i++; j--;
	}

	if (suma > sumb)
		cout << cnt << endl;
	
	else
		cout << "-1\n";

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}