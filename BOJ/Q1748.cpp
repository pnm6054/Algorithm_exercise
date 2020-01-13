#include <iostream>
#include <string>
using namespace std;

long long pow(int n)
{
	long long r = 1;
	for (int i = 0; i < n - 1; i++)
		r *= 10;
	return r;
}

int main(void)
{
	string s;
	int l;
	long long r = 0;
	cin >> s;
	l = s.length();
	for (int i = 1; i < l; i++)
		r += (i * pow(i) * 9);
	r += ((stoll(s) - pow(l) + 1) * l);
	cout << r << endl;
	return 0;
}