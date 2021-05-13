#include <iostream>

using namespace std;

void solve()
{
	int H, P; cin >> H >> P;

	while (H > 0 && P > 0)
	{
		H -= P;
		
		if (H != 0)
			P /= 2;
	}

	(H <= 0) ? cout << "1" << endl : cout << "0" << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();	

	return 0;
}