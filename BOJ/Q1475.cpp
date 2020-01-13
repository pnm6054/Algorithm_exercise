#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string n;
	int s[10] = { 0, }, l;
	cin >> n;
	l = n.length();
	for (int i = 0; i < l; i++)
	{
		if (n[i] == '6' || n[i] == '9')
		{
			if (s[6] > s[9])
				s[9]++;
			else
				s[6]++;
		}
		else
			s[n[i] - 48]++;
	}
	cout << *max_element(s, s + 10) << endl;
	return 0;
}