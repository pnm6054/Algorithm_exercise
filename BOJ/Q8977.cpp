#include <iostream>
using namespace std;

int main(void)
{
	int N, K, B;
	long long sum = 0;
	cin >> N >> K >> B;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = (B - 1) % N; i < ((B - 1) % N) + K; i++) {
		sum += arr[i % N];
	}
	cout << sum << endl;
	return 0;
}