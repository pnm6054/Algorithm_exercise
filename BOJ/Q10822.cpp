#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int pos, sum = 0;
	cin >> s;
	while (1)
	{
		pos = s.find(",");
		if (pos == -1) break;
		sum += stoi(s.substr(0, pos));
		s = s.substr(pos + 1);
	}
	sum += stoi(s);
	cout << sum << endl;
	return 0;
}