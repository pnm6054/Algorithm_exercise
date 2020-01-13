#include <iostream>
#include <vector>
using namespace std;

class Person
{
public:
	int x, y, i = 1;
	Person(int x, int y): x(x), y(y) {}
	bool operator<(const Person& p)
	{
		return ((x < p.x) && (y < p.y));
	}
};

int main(void)
{
	int n, x, y;
	int p = 0;
	scanf("%d", &n);
	vector<Person> v;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		v.push_back(Person(x, y));
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			if (v[i] < v[j]) v[i].i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i].i << " ";
	}
	return 0;
}