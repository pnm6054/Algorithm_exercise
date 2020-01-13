#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int t = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		if (s.find("FBI") <= s.length() && s.find("FBI") >= 0)
		{
			t++;
			cout << i + 1 << " ";
		}
	}
	if (!t)
		cout << "HE GOT AWAY!" << endl;
	return 0;
}