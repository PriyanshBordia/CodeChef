#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

void solve()
{
	ll ans(0), sum(0), cnt(0), mx(-1e18), mn(1e18);

	ll x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;

	int arr[x2 + 1][y2 + 1];
	int rtr = 0, ctr = 1;
	for (int i = 1; i <= x2; i++)
	{
		rtr += i; ctr = rtr;
		int k = i;
		for (int j = 1; j <= y2; j++)
		{
			arr[i][j] = ctr;
			if (j == 1)
				ctr += k;
			else
				ctr += j + i - 1;
		}
	}


	for (int i = x1; i < x2; i++)
		sum += arr[i][y1];

	for (int j = y1; j <= y2; j++)
		sum += arr[x2][j];


	cout << sum << endl;

	// x1 -> 3
	// x2 -> 5

	// a[x1] + y1 + 4 + 5 + 


	return;
}

// 1 2 4 7 11
// 3 5 8 12 17
// 6 9 13 18
// 10

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}