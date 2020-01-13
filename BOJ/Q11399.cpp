#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	int n, t, res = 0;
	list<int> p;
	cin >> n;
	while (n--)
	{
		cin >> t;
		p.push_back(t);
	}
	p.sort();
	t = p.size();
	for (list<int>::iterator pos = p.begin(); pos != p.end(); pos++)
		res += *pos * t--;
	cout << res << endl;
	return 0;
}