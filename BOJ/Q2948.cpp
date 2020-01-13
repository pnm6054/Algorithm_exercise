#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int m, d, month[12] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 }, r = 0;
	string wd[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };
	cin >> d >> m;
	for (int i = 0; i < m; i++) r += month[i];
	r += d;
	cout << wd[r % 7] << endl;
	return 0;
}