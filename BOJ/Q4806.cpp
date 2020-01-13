#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int l = 0;
	string s;
	while (1)
	{
		getline(cin, s);
		if (cin.eof()) break;
		l++;
	}
	cout << l << endl;
	return 0;
}