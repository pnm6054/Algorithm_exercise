#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t, hd;
	string a, b;
	cin >> t;
	while (t--)
	{
		hd = 0;
		cin >> a >> b;
		for (int i = 0; i < a.length(); i++)
			if (a[i] != b[i]) hd++;
		cout << "Hamming distance is " << hd << "." << endl;
	}
	return 0;
}