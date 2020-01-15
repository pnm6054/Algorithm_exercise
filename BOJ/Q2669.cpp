#include <iostream>
using namespace std;

/*
	https://www.acmicpc.net/problem/2669
	author : sjkim
	date : JAN 15, 2019
*/
int main(void) {
	int lx, ly, rx, ry, res = 0;
	int arr[101][101] = { 0 };
	for (int t = 0; t < 4; t++) {
		cin >> lx >> ly >> rx >> ry;
		for (int i = lx; i < rx; i++) {
			for (int j = ly; j < ry; j++) {
				arr[i][j] += 1;
			}
		}
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] > 0) res++;
		}
	}
	cout << res << endl;
	return 0;
}