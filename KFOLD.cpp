#include <iostream>
#include <cstring>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n, k; cin >> n >> k;

	string s; cin >> s;

	if (n < k)
	{
		cout << "IMPOSSIBLE\n";
		return;
	}

	else
	{
		ll u = n / k;

		ll cnt1(0), cnt0(0);
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '1')
				cnt1++;
			else
				cnt0++;
		}

		if (cnt1 % u == 0 && cnt0 % u == 0)
		{

				string r;

				if (cnt0 >= cnt1)
				{
					for (int i = 0; i < cnt1 / u; ++i)
						r += '1';

					cnt0 /= u;
					while (cnt0 >= 2)
					{
						r = '0' + r + '0';
						cnt0 -= 2;
					}	
				}

				else
				{
					for (int i = 0; i < cnt0 / u; ++i)
						r += '0';

					cnt1 /= u;
					while (cnt1 >= 2)
					{
						r = '1' + r + '1';
						cnt1 -= 2;
					}
				}
				
				string t;
				for (int i = 0; i < u; ++i)
				{
					t += r;
				}

				cout << t << endl;
		}

		else if (cnt1 % k == 0 && cnt0 % k == 0 && k % 2 == 0)
		{
			string r;

			if (cnt0 >= cnt1)
			{
				for (int i = 0; i < cnt1 / k; ++i)
					r += '1';

				cnt0 /= k;
				while (cnt0 >= 2)
				{
					r = '0' + r + '0';
					cnt0 -= 2;
				}	
			}

			else
			{
				for (int i = 0; i < cnt0 / k; ++i)
					r += '0';

				cnt1 /= k;
				while (cnt1 >= 2)
				{
					r = '1' + r + '1';
					cnt1 -= 2;
				}
			}
			
			string t;
			for (int i = 0; i < k; ++i)
			{
				t += r;
			}

			cout << t << endl;
		}


		else
			cout << "IMPOSSIBLE\n";
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}

//011001100110
