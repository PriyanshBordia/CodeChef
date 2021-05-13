#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void solve()
{
	int n, k; cin >> n >> k;

	int F[n + 1]; for (int i = 1; i <= n; ++i) cin >> F[i];

	set<int> table;
	vector<int> v;

	int ans(1), disp(0);
	for (int i = 1; i <= n; i++)
	{
		if (table.find(F[i]) != table.end())
		{
			ans++;
			table.clear();
			v.push_back(i - 1);
		}

		table.insert(F[i]);
	}

	if (v[v.size() - 1] != n)
		v.push_back(n);

	// cout << v.size() << endl;

	int inEff = ans * k + disp;

	set<int> buff;

	if (k > 1)
	{
		int i(0), flag(0); 
		while (i < v.size() - 1)
		{
			int l = 1;

			if (i > 0)
				l = v[i - 1] + 1;

			cout << l  << " " << v[i] << " " << v[i+1]<<" ";

			int cnt(0);
			for (int p = l; p <= v[i]; p++)
			{
				for (int q = v[i] + 1; q <= v[i + 1] && q < n; q++)
				{
					if (F[p] == F[q])
					{
						cnt++;

						if (flag != 11)
						{
							flag = 1;
							buff.insert(F[p]);
						}
					}
				}
			}

			cout << cnt << endl;

			if (k > cnt)
			{
				inEff -= (k - cnt);
				v[i] = v[i + 1]; 
				v.erase(v.begin() + i + 1);
				
				if (flag == 1)
				{
					inEff += buff.size();
					flag = 11;
				}
			}
			
			else
				i++;
		}
	}

	cout << inEff << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();	

	return 0;
}