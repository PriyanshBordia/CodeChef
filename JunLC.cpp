#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <assert.h>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <limits.h>
typedef long long ll;

using namespace std;

void solve()
{
	int ans(0), sum(0), cnt(0);

	ll n, m; cin >> n >> m;

	int a[n + 1]; //a[0] = -1;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int b[m + 1];
	for (int i = 1; i <= m; i++)
		cin >> b[i];

	int right[n + 1];
	int left[n + 1]; 
	
	for (int i = 1; i <= n; i++)
	{	
		left[i] = -1;

		int j = i;
		while (j >= 1 && a[j] != 1)
			j--;

		if (j >= 1)
			left[i] = j;
	}

	for (int i = n; i >= 1; i--)
	{
		right[i] = -1;

		int j = i;
		while (j <= n && a[j] != 2)
			j++;

		if (j <= n)
			right[i] = j;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << left[i] << " " << right[i] << endl;
	}

	int c[m + 1];
	for (int i = 1; i <= m; i++)
	{
		if (right[i] == -1 && left[i] == -1)
			c[i] = -1;

		else if (right[i] != -1 && left[i] == -1)
			c[i] = right[i] - b[i];

		else if (right[i] == -1 && left[i] != -1)
			c[i] = b[i] - left[i];

		else
			c[i] = min(right[i] - b[i], b[i] - left[i]);
	}	

	for (int i = 1; i <= m; i++)
		cout << c[i] << " ";

	cout << endl;

	return;
}

int main()
{
	ll t;
	cin >> t;

	while (t--)
		solve();

	return 0;
}

/*
if (a[b[i]] != 0)
			c[i] = 0;

		else
		{
			int j = b[i];
			while (j > 0)
			{
				if (a[j] == 1)
				{
					ans = b[i] - j;
					break;
				}
				j--;
			}

			j = b[i];
			while (j <= n)
			{
				if (a[j] == 2)
				{
					if (ans != 0 && ans > (j - b[i]))
					{
						ans = j - b[i];
						break;
					}
				}
				j++;
			}

			if (ans == 0)
				c[i] = -1;
			else
				c[i] = ans;
		}

		*/