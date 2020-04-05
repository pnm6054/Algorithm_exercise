#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int l;
	string str;
	cin >> str;
	l = str.length();
	for (int i = 0; i < l; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			cout << (char)(str[i] - 32);
		else
			cout << (char)str[i];
	}
	return 0;
}