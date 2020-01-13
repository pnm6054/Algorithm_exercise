#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string m;
	int l, c[3] = { 1, 0 ,0 };
	cin >> m;
	l = m.length();
	for (int i = 0; i < l; i++)
	{
		switch (m[i])
		{
		case 'A':
			swap(c[0], c[1]);
			break;
		case 'B':
			swap(c[1], c[2]);
			break;
		case 'C':
			swap(c[0], c[2]);
			break;
		}
	}
	for (int i = 0; i < 3; i++)
		if (c[i]) cout << i + 1;
	return 0;
}