#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string a, b;
	cin >> a >> b;
	if (a.length() < b.length()) a.swap(b);
	for (int i = 0; i < a.length() - b.length(); i++)
		cout << a[i];
	for (int i = 0; i < b.length(); i++)
		cout << a[a.length() - b.length() + i] + b[i] - 96;
	return 0;
}