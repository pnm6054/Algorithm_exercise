#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	string s, d;
	cin >> n >> s >> d;
	if (n % 2) for (int i = 0; i < s.length(); i++) s[i] = s[i] == '0' ? '1' : '0';
	if (!s.compare(d)) cout << "Deletion succeeded" << endl;
	else cout << "Deletion failed" << endl;
	return 0;
}