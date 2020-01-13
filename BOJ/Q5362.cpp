#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int t, i;
	string s;
	cin >> t;
	getline(cin, s);
	while (t--)
	{
		i = 0;
		getline(cin, s);
		string str, yoda;
		stringstream ss(s);
		stringstream ss2(yoda);
		while (ss >> str)
		{
			if (i < 2)
				ss2 << str + " ";
			else
				cout << str << " ";
			i++;
		}
		while (ss2 >> str)
			cout << str << " ";
		cout << endl;
	}
	return 0;
}