#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string b, t, r;
	int len, n = 0;
	cin >> b;
	len = b.length();
	if (len % 3 == 2)
	{
		t.assign(b);
		b.assign("0");
		b.append(t);
	}
	else if (len % 3 == 1)
	{
		t.assign(b);
		b.assign("00");
		b.append(t);
	}
	len = b.length();
	for (int i = 0; i < len / 3; i++)
	{
		t.assign(b.substr(i * 3, 3));
		if (!t.compare("000")) n = 0;
		else if (!t.compare("001")) n = 1;
		else if (!t.compare("010")) n = 2;
		else if (!t.compare("011")) n = 3;
		else if (!t.compare("100")) n = 4;
		else if (!t.compare("101")) n = 5;
		else if (!t.compare("110")) n = 6;
		else if (!t.compare("111")) n = 7;
		cout << n;
	}
	cout << endl;
	return 0;
}