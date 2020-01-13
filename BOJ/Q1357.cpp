#include <iostream>
#include <string>
using namespace std;

string rev(string s)
{
	string a = "";
	for (int j = s.length(); j > 0; j--)
		a+=(s[j - 1]);
	return a;
}

int main(void)
{
	string x, y;
	cin >> x >> y;
	cout << stoi(rev(to_string(stoi(rev(x)) + stoi(rev(y))))) << endl;
	return 0;
}