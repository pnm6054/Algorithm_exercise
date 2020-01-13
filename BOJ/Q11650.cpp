#include <iostream>
#include <string>
#include <list>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int x, int y)
		: x(x), y(y) {}
	string toString()
	{
		return to_string(x) + " " + to_string(y);
	}
};

bool compare_Point(const Point& f, const Point& s)
{
	if (f.y == s.y) return f.x < s.x;
	else return f.y < s.y;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, x, y;
	list<Point> l;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &x, &y);
		l.push_back(Point(x, y));
	}
	l.sort(compare_Point);
	for (list<Point>::iterator it = begin(l); it != end(l); it++)
		cout << it->toString() << "\n";
	return 0;
}