#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main(void)
{
	int l1, l2, r = 0;
	string s1, s2;
	vector<int> v1(26, 0), v2(26, 0);
	cin >> s1 >> s2;
	l1 = s1.length();
	l2 = s2.length();
	for (int i = 0; i < l1; i++)
		v1[s1[i] - 97]++;
	for (int i = 0; i < l2; i++)
		v2[s2[i] - 97]++;
	for (int i = 0; i < 26; i++)
		r += abs(v1[i] - v2[i]);
	cout << r << endl;
	return 0;
}