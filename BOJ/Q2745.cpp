#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int i;
	cin >> s >> i;
	cout << stoll(s, nullptr, i) << endl;
	return 0;
}