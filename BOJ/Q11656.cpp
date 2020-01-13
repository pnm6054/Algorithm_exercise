#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void)
{
	string s;
	list<string> lst;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		lst.push_back(s.substr(i, len - i));
	}
	lst.sort();
	for (list<string>::iterator it = begin(lst); it != end(lst); it++)
	{
		cout << *it << endl;
	}
	return 0;
}