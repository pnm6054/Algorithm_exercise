#include <iostream>
using namespace std;

int main(void)
{
	int test_case;
	int T, N, M, *arr, s, o, max;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M;
		arr = new int[N];

		for (int i = 0; i < N; i++) 
		{
			arr[i] = 0;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				cin >> s;
				arr[i] += s;
			}
		}
		o = 0;
		max = 0;
		for (int i = 0; i < N; i++) 
		{
			if (arr[i] > max)
				max = arr[i];
		}
		for (int i = 0; i < N; i++)
		{
			if (arr[i] == max)
				o++;
		}
		cout << "#" << test_case << " " << o << " " << max << endl;
	}
	return 0;
}