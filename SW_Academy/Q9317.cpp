#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int TC, N, ans;
	string s1, s2;
	cin >> TC;
	for (int i = 0; i < TC; i++) {
		cin >> N >> s1 >> s2;
		ans = 0;
		for (int j = 0; j < N; j++) {
			if (s1[j] == s2[j])
				ans++;
		}
		cout << "#" << i + 1 << " " << ans << endl;
	}
	return 0;
}