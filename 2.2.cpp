#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	int n; cin>>n;

	ll a[n]; for (ll i =0; i <n; i++) cin >> a[i];

	ll sum(a[0]), flag(1);
	for (int i =1; i <n; i++)
	{
		if (a[i] >= sum && flag == 1)
		{
			sum += a[i];
			flag = 0;
		}

		else if (flag == 0)
		{
			sum -= a[i];
			flag = 1;
		}
		cout<<sum<<endl;
	}
	return;
}

int main()
{
	int t; cin >>t;

	while (t--)
		solve();
}