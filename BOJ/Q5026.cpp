#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, index;
	cin >> t;
	string s;
	getline(cin, s);
	while (t--)
	{
		getline(cin, s);
		if (s.compare("P=NP"))
		{
			index = s.find('+');
			cout << stoi(s.substr(0, index)) + stoi(s.substr(index + 1)) << endl;
		}
		else
			cout << "skipped" << endl;
	}
	return 0;
}