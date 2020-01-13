#include <iostream>
#include <vector>

long long sum(std::vector<int> &a) {
	long long ans = 0;
	int sz = a.size();
	for (int i = 0; i < sz; i++)
		ans += a[i];
	return ans;
}

int main(void)
{
	std::vector<int> v(10, 10);
	std::cout << sum(v) << std::endl;
	return 0;
}