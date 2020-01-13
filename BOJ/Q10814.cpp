#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Mem
{
public:
	string name;
	int age, si;
	Mem() : name(" "), age(0), si(0) {}
	Mem(const string n, const int a, const int i) : name(n), age(a), si(i) {}
	bool operator <(const Mem &M) const
	{
		if (this->age == M.age)
			return this->si < M.si;
		else
			return this->age < M.age;
	}
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a;
	string s;
	cin >> n;
	vector<Mem> lst(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a >> s;
		lst[i] = Mem(s, a, i);
	}
	sort(lst.begin(), lst.end());
	for (int i = 0; i < n; i++)
		cout << lst[i].age << " " << lst[i].name << "\n";
	return 0;
}