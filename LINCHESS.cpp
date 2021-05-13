#include <iostream>
#include <algorithm>
typedef long long ll;

using namespace std;

void solve()
{
	int n, k; cin >> n >> k;

	int p[n]; for (int i = 0; i < n; i++) cin >> p[i];

	int ans(-1), cnt(1e09);
	for (int i = 0; i < n; i++)
	{
		if (k % p[i] == 0 && (k / p[i] - 1) < cnt)
		{
			cnt = k / p[i] - 1;
			ans = p[i];
		}
	}

	cout << ans << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();	

	return 0;
}