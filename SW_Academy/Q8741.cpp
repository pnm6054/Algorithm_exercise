#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	int test_case;
	int T;
	string inp ,str;
	cin >> T;
	getline(cin, str);
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cout << "#" << test_case << " ";
		getline(cin, inp);
		stringstream ss(inp);
		while (ss >> str)
			cout << (char)(str[0] - 32);
		cout << endl;
	}

	return 0;
}