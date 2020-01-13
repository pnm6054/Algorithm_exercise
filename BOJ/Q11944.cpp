#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char * n = new char[4];
	int m, t = 0;
	cin >> n >> m;
	for (int i = 0; i < atoi(n) * strlen(n) && t < m; i++)
	{
		cout << n[i % strlen(n)];
		t++;
	}
	cout << endl;
	return 0;
}