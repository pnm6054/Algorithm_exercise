#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int k, h, l;
	string s;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> h >> s;
		l = s.length();
		for (int j = 0; j < l; j++)
			if (s[j] == 'c') h++;
			else h--;
		cout << "Data Set " << i+1 << ":\n" << h << endl << endl;
	}
	return 0;
}