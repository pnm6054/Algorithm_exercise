#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string l, p, r;
	int w, c, m, b, n, mx, len;
	cin >> n;
	while (n--)
	{
		cin >> l >> p;
		len = p.length();
		w = c = m = b = 0;
		for (int i = 0; i < len; i++)
		{
			switch (p[i])
			{
			case 'B':
				b += 2;
				break;
			case 'C':
				c += 1;
				break;
			case 'M':
				m += 4;
				break;
			case 'W':
				w += 3;
				break;
			}
		}
		mx = max(max(b, c), max(m, w));
		if (mx == b && mx != c && mx != m && mx != w)
			r = "Bobcat";
		else if (mx != b && mx == c && mx != m && mx != w)
			r = "Coyote";
		else if (mx != b && mx != c && mx == m && mx != w)
			r = "Mountain Lion";
		else if (mx != b && mx != c && mx != m && mx == w)
			r = "Wolf";
		else
			r = " ";
		if (r == " ")
			cout << l << ": " << "There is no dominant species" << '\n';
		else
			cout << l << ": " << "The " << r << " is the dominant species" << '\n';
	}
	return 0;
}