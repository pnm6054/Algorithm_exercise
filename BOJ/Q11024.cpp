#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int sum, t;
	string input, i;
	cin >> t;
	getline(cin, input);
	while (t--)
	{
		sum = 0;
		getline(cin, input);
		stringstream ss(input);
		while (ss >> i) sum += stoi(i);
		cout << sum << endl;
	}
	return 0;
}