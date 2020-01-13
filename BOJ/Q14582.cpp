#include <iostream>
using namespace std;

int main(void)
{
	bool rv = false;
	int ws[9] = { 0, }, sg = 0, tw = 0, ts = 0;
	for (int i = 0; i < 9; i++)
		cin >> ws[i];
	for (int i = 0; i < 9; i++)
	{
		cin >> sg;
		tw += ws[i];
		if (tw > ts)
		{
			rv = true;
			break;
		}
		ts += sg;
	}
	if (rv) cout << "Yes";
	else cout << "No";
	return 0;
}