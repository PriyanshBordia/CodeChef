#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

ll findMin(ll arr[], ll n)
{
    // Calculate sum of all elements
    ll sum = 0; 
    for (ll i = 0; i < n; i++)
        sum += arr[i];
 
    // Create an array to store results of subproblems
    bool dp[n+1][sum+1];
 
    // Initialize first column as true. 0 sum is possible 
    // with all elements.
    for (ll i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // Initialize top row, except dp[0][0], as false. With
    // 0 elements, no other sum except 0 is possible
    for (ll i = 1; i <= sum; i++)
        dp[0][i] = false;
 
    // Fill the partition table in bottom up manner
    for (ll i=1; i<=n; i++)
    {
        for (ll j=1; j<=sum; j++)
        {
            // If i'th element is excluded
            dp[i][j] = dp[i-1][j];
 
            // If i'th element is included
            if (arr[i-1] <= j)
                dp[i][j] |= dp[i-1][j-arr[i-1]];
        }
    }
  
    // Initialize difference of two sums. 
    ll diff = 2147483647;
     
    // Find the largest j such that dp[n][j]
    // is true where j loops from sum/2 t0 0
    for (ll j=sum/2; j>=0; j--)
    {
        // Find the 
        if (dp[n][j] == true)
        {
            diff = sum-2*j;
            break;
        }
    }
    return diff;
}


void solve()
{
	ll ans(0), sum(0), cnt(0), counter(0), mx(0), mn(0);

	ll n, k; cin >> n >> k;

	ll v[n], a[n]; for (ll i = 0; i < n; i++) cin >> v[i];

	sort (v, v + n);

	ll i = n - 1;
	while (i >= 0 && mx < (2 * k))
	{
		a[n - i - 1] = v[i];
		mx += v[i--];
		cnt++;
	}
	
	if (cnt == 1 && i >= 0)
	{
		a[n - i - 1] = v[i];
		mx += v[i--];
		cnt++;
	}

	mn = findMin(a, cnt);

	sum = (mx + mn) / 2;
	ans = mx - sum;

	for (ll j = i; j >= 0 && ans < k; j--)
	{
		ans += v[j];
		cnt++;
	}
	
	if (sum < k || ans < k)
		cnt = -1;

	cout << cnt << endl;

	return;
}


int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}
