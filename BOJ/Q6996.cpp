#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	int n, l1, l2;
	string s1, s2;
	vector<int> v1, v2;
	cin >> n;
	while (n--)
	{
		cin >> s1 >> s2;
		v1.assign(26, 0);
		v2.assign(26, 0);
		l1 = s1.length();
		l2 = s2.length();
		for (int i = 0; i < l1; i++)
			v1[s1[i] - 97]++;
		for (int i = 0; i < l2; i++)
			v2[s2[i] - 97]++;
		if (v2 == v1) cout << s1 << " & " << s2 << " are anagrams." << endl;
		else cout << s1 << " & " << s2 << " are NOT anagrams." << endl;
	}
	return 0;
}