#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string s, ss;
	cin >> t;
	while (t--)
	{
		int tc[8] = { 0 };
		cin >> s;
		for (int i = 0; i < 38; i++)
		{
			ss = s.substr(i, 3);
			if (!ss.compare("TTT")) tc[0]++;
			else if (!ss.compare("TTH")) tc[1]++;
			else if (!ss.compare("THT")) tc[2]++;
			else if (!ss.compare("THH")) tc[3]++;
			else if (!ss.compare("HTT")) tc[4]++;
			else if (!ss.compare("HTH")) tc[5]++;
			else if (!ss.compare("HHT")) tc[6]++;
			else if (!ss.compare("HHH")) tc[7]++;
		}
		for (int i = 0; i < 8; i++)
			cout << tc[i] << " ";
		cout << endl;
	}
	return 0;
}