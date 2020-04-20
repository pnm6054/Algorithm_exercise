#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main(void)
{
	int test_case;
	int T, N, K, *arr, sum;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> K;
		arr = new int[N];
		sum = 0;
		for (int i = 0; i < N; i++)
			cin >> arr[i];
		sort(arr, arr + N, desc);
		for (int i = 0; i < K; i++)
			sum += arr[i];
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}