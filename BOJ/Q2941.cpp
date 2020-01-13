#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int i = 0, l = s.length(), r = 0;
	while (i < l)
	{
		if (!s.substr(i, 3).compare("dz="))
			i += 2;
		else if (!s.substr(i, 2).compare("c="))
			i++;
		else if (!s.substr(i, 2).compare("c-"))
			i++;
		else if (!s.substr(i, 2).compare("d-"))
			i++;
		else if (!s.substr(i, 2).compare("lj"))
			i++;
		else if (!s.substr(i, 2).compare("nj"))
			i++;
		else if (!s.substr(i, 2).compare("s="))
			i++;
		else if (!s.substr(i, 2).compare("z="))
			i++;
		r++;
		i++;
	}
	cout << r << endl;
	return 0;
}