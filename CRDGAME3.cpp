#include <iostream>

using namespace std;

void solve()
{
	int pC, pR; cin >> pC >> pR;

	int cntC = pC / 9;
	if (pC % 9 != 0)
		cntC++;

	int cntR = pR / 9;
	if (pR % 9 != 0)
		cntR++;

	if (cntR <= cntC)
		cout << "1 " << cntR << endl;
	
	else
		cout << "0 " << cntC << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();	

	return 0;
}