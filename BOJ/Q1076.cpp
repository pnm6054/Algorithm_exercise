#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string c[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	long long m[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
	int index[3] = { 0, };
	string s;
	for (int i = 0; i < 3; i++)
	{
		cin >> s;
		for (int j = 0; j < 10; j++)
		{
			if (!s.compare(c[j]))
			{
				index[i] = j;
				break;
			}
		}
	}
	cout << ((10 * index[0]) + index[1]) * m[index[2]] << endl;
	return 0;
}