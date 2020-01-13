#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int sum = 0;
	string input;
	getline(cin, input);
	stringstream ss(input);

	string i;
	while (ss >> i) sum += stoi(i);
	cout << sum << endl;
	return 0;
}