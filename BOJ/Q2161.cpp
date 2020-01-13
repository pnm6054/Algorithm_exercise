#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst;
	int n, t;
	cin >> n;
	for (int i = 0; i < n; i++)
		lst.push_back(i + 1);
	while (lst.size() > 1)
	{
		//cout << lst.front() << " ";
		lst.pop_front();
		lst.push_back(lst.front());
		lst.pop_front();
	}
	cout << lst.front() << endl;
	return 0;
}