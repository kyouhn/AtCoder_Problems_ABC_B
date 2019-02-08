#include"bits/stdc++.h"

using namespace std;

int main() {
	vector<int> A(3);
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> A[i];
		sum = max(sum, A[i]);
	}
	
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		sum *= 2;
	}

	sort(A.begin(), A.end());
	cout << sum + A[0] + A[1] << endl;

	return 0;
}