#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	string s, p; cin >> s >> p;

	int freq[26] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		freq[s[i] - 'a']++;
	}

	for (int i = 0; i < p.size(); ++i)
	{
		freq[p[i] - 'a']--;
	}

	char c = p[0];

	if (freq[c - 'a'] > 0)							
	{
		int j = 0;

		while (p[j] == p[0])
			j++;

		p = (p[j] < c) ? p + string(freq[c - 'a'], c) : string(freq[c - 'a'], c) + p;
	}

	for (int i = c - 'a' - 1; i >= 0; i--)
	{
		if (freq[i] > 0)
		{
			string t(freq[i], 'a' + i);

			p = t + p;
		}
	}

	for (int i = c - 'a' + 1; i < 26; ++i)
	{
		if (freq[i] > 0)
		{
			string t(freq[i], 'a' + i);

			p = p + t;
		}
	}

	cout << p << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();	

	return 0;
}