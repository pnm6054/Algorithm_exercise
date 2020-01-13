#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void)
{
	string s;
	int a[3] = { 1, 0 ,0 };
	int len;
	cin >> s;
	len = s.length();
	for (int i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case 'A':
			swap(a[0], a[1]);
			break;
		case 'B':
			swap(a[1], a[2]);
			break;
		case 'C':
			swap(a[0], a[2]);
			break;
		}
	}
	if (a[0])
		cout << 1 << endl;
	else if (a[1])
		cout << 2 << endl;
	else
		cout << 3 << endl;
	return 0;
}