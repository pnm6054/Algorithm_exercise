#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string o, b("");
	int len;
	cin >> o;
	len = o.length();

	if (o[0] == '0') b.assign("000");
	else if (o[0] == '1') b.assign("001");
	else if (o[0] == '2') b.assign("010");
	else if (o[0] == '3') b.assign("011");
	else if (o[0] == '4') b.assign("100");
	else if (o[0] == '5') b.assign("101");
	else if (o[0] == '6') b.assign("110");
	else if (o[0] == '7') b.assign("111");
	cout << stoi(b);

	for (int i = 1; i < len; i++)
	{
		if (o[i] == '0') cout << "000";
		else if (o[i] == '1') cout << "001";
		else if (o[i] == '2') cout << "010";
		else if (o[i] == '3') cout << "011";
		else if (o[i] == '4') cout << "100";
		else if (o[i] == '5') cout << "101";
		else if (o[i] == '6') cout << "110";
		else if (o[i] == '7') cout << "111";
	}
	return 0;
}