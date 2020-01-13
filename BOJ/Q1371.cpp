#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char n;
	int s[26] = { 0 }, max = 0;
	while ((n = getchar()) != EOF)
		if (n <= 'z' && n >= 'a') s[n - 97]++;
	for (int i = 0; i < 26; i++)
		if (s[i] > max)
			max = s[i];
	for (int i = 0; i < 26; i++)
		if (s[i] == max) cout << char(i + 97);
	return 0;
}