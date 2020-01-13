#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char * a = new char[100];
	char * b = new char[100];
	char * res;
	char o;
	int la, lb;
	cin >> a >> o >> b;
	la = strlen(a);
	lb = strlen(b);
	if (o == '*')
	{
		res = new char[la + lb];
		res[0] = '1';
		for (int i = 1; i < la + lb - 1; i++)
			res[i] = '0';
		res[la + lb - 1] = '\0';
	}
	else
	{
		if (la == lb)
		{
			res = new char[la];
			strcpy(res, a);
			res[0] = '2';
		}
		else
		{
			int len = la > lb ? la : lb;
			res = new char[len];
			if (la > lb) {
				strcpy(res, a);
				res[len - lb] = '1';
			}
			else {
				strcpy(res, b);
				res[len - la] = '1';
			}
		}
	}
	cout << res << endl;
	return 0;
}