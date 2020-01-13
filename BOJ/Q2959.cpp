#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v(4);
	for (int i = 0; i < 4; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	cout << v[0] * v[2] << endl;
	return 0;
}