#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s, t;
	int res = 0, it;
	while (getline(cin, t))
		s.append(t);
	while (1)
	{
		it = s.find(",");
		if (it == -1) break;
		res += stoi(s.substr(0, it));
		s = s.substr(it + 1);
	}
	res += stoi(s);
	cout << res << endl;
	return 0;
}