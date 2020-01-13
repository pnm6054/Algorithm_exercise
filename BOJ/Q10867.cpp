#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	set<int> s;
	int n, t;
	cin >> n;
	while (n--)
	{
		cin >> t;
		s.insert(t);
	}
	for (set<int>::iterator it = begin(s); it != end(s); it++)
		cout << *it << endl;
	return 0;
}