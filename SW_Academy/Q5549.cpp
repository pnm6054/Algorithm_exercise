#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int test_case;
	int T;
	string str;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> str;
		cout << "#" << test_case << " ";
		if (str[str.length() - 1] % 2)
			cout << "Odd" << endl;
		else
			cout << "Even" << endl;
	}
	return 0;
}