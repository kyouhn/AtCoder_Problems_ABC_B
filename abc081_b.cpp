#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	int A[222];
	int ans = 100;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		int res = 0;
		while (A[i] % 2 == 0) {
			A[i] /= 2;
			res++;
		}
		ans = min(ans, res);
	}

	cout << ans << endl;
	return 0;
}