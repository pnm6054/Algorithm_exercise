#include <iostream>
using namespace std;

int main(void)
{
	int n, min = 1500;
	cin >> n;
	for (int i = n / 5; i >= 0; i--) {
		for (int j = 0; j * 3 + i * 5 <= n; j++) {
			if (((i * 5 + j * 3) == n) && (i + j < min)) {
				min = i + j;
			}
		}
	}
	if (min == 1500)
		cout << -1 << endl;
	else 
		cout << min << endl;
	return 0;
}