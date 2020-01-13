#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int year, month, day;
	int dy, dm, dd;
public:
	Student()
	{ }
	int compare(Student &s)
	{
		dy = this->year - s.year;
		dm = this->month - s.month;
		dd = this->day - s.day;
		if (dy) return dy;
		else if (dm) return dm;
		else return dd;
	}
	void setStudent(string n, int y, int m, int d)
	{
		this->name = n;
		this->year = y;
		this->month = m;
		this->day = d;
	}
	string getname()
	{
		return this->name;
	}
};

int main(void)
{
	int n, max = 0, min = 0, y, m, d;
	string name;
	cin >> n;
	Student * s = new Student[n];
	cin >> name >> d >> m >> y;
	s[0].setStudent(name, y, m, d);
	for (int i = 1; i < n; i++)
	{
		cin >> name >> d >> m >> y;
		s[i].setStudent(name, y, m, d);
		if (s[i].compare(s[max]) < 0) max = i;
		if (s[min].compare(s[i]) < 0) min = i;
	}
	cout << s[min].getname() << endl << s[max].getname() << endl;
	return 0;
}