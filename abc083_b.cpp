#include"bits/stdc++.h"

using namespace std;

int findSumDigits(int N) {
	int sum = 0;
	while (N > 0) {
		sum += N % 10;
		N /= 10;
	}
	return sum;
}

int main() {
	int N, A, B;
	cin >> N >> A >> B;

	int total = 0;

	for (int i = 1; i <= N; i++) {
		int sum = findSumDigits(i);
		if (sum >= A&&B >= sum) {
			total += i;
		}
	}

	cout << total << endl;

	return 0;
}