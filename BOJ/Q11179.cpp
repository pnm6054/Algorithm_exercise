#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long dec2bin(long long n)
{
	string bin = "";
	long long ans = 0;
	while (n != 0)
	{
		bin += to_string(n % 2);
		n /= 2;
	}
	for (int i = bin.length() - 1; i >= 0 ; --i)
	{
		ans += (bin[i] - 48) * pow(2, bin.length() - i - 1);
	}
	return ans;
}

int main(void)
{
	long long N;
	cin >> N;
	cout << dec2bin(N) << endl;
	return 0;
}