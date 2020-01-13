#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	string s, str;
	scanf("%d", &t);
	getline(cin, s);
	while (t--)
	{
		getline(cin, s);
		stringstream ss(s);
		while (ss >> str)
		{
			reverse(str.begin(), str.end());
			cout << str << " ";
		}
		cout << endl;
	}
	return 0;
}