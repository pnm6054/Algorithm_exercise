#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	int k, n, lg, t, pv;
	cin >> k;
	for (int i = 1; i < k + 1; i++)
	{
		cin >> n;
		lg = 0;
		list<int> lst;
		while (n--)
		{
			cin >> t;
			lst.push_back(t);
		}
		lst.sort();
		pv = lst.front();
		for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		{
			if (*it - pv > lg) lg = *it - pv;
			pv = *it;
		}
		cout << "Class " << i << endl << "Max " << lst.back() << ", Min " << lst.front() << ", Largest gap " << lg << endl;
	}
	return 0;
}