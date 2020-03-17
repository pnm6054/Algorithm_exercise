#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, I;
	cin >> N >> I;
	
	string *str = new string[N];
	for (int i = 0; i < N; i++) 
		cin >> str[i];

	sort(str, str + N);

	cout << str[I - 1] << endl;

	return 0;
}