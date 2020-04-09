#include <iostream>
using namespace std;

int main(void)
{
	int test_case;
	int T, min, max, sum, inp;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		max = 0, min = 100000000;
		for (int i = 0; i < 10; i++) 
		{
			sum = 0;
			cin >> inp;
			while (inp != 0)
			{
				sum += (inp % 10);
				inp /= 10;
			}
			if (sum > max)
				max = sum;
			if (sum < min)
				min = sum;
		}
		cout << "#" << test_case << " " << max << " " << min << endl;
	}
	return 0;
}