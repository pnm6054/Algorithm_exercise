#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int len, max, min;
	string a, b, ta, tb;
	cin >> a >> b;
	ta = a, tb = b;
	len = ta.length();
	for (int i = 0; i < len; i++)
		if (ta[i] == '5') ta[i] = '6';
	len = tb.length();
	for (int i = 0; i < len; i++)
		if (tb[i] == '5') tb[i] = '6';
	max = stoi(ta) + stoi(tb);
	ta = a, tb = b;
	len = ta.length();
	for (int i = 0; i < len; i++)
		if (ta[i] == '6') ta[i] = '5';
	len = tb.length();
	for (int i = 0; i < len; i++)
		if (tb[i] == '6') tb[i] = '5';
	min = stoi(ta) + stoi(tb);
	cout << min << " " << max << endl;
	return 0;
}