#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n, k, x, y; cin >> n >> k >> x >> y;


	for (int i = 0; i <= n; i++)
	{
		if ((x + i * k) % n == y)
		{
			yes;
			return;
		}
	}
	// if (y == x)
	// 	yes;

	// else
	// {
	// 	int i = (x + k) % n; 
	// 	while (i != x)
	// 	{
	// 		cout << i << endl;
	// 		if (i == y)
	// 		{
	// 			yes;
	// 			return;
	// 		}

	// 		i = (i + k) % n;
	// 	}

		no;
	// }

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}