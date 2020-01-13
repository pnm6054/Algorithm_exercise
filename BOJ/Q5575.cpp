#include <iostream>
using namespace std;

int main(void)
{
	int ih, im, is, oh, om, os, r;
	for (int i = 0; i < 3; i++)
	{
		cin >> ih >> im >> is >> oh >> om >> os;
		r = (oh * 3600 + om * 60 + os) - (ih * 3600 + im * 60 + is);
		oh = r / 3600;
		r %= 3600;
		cout << oh << " " << r / 60 << " " << r % 60 << endl;
	}
	return 0;
}