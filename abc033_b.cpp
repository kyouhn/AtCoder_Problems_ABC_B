#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string>S(N);
	vector<int>P(N);
	int sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> S[i] >> P[i];
		sum += P[i];
	}

	
	for (int i = 0; i < N; i++) {
		if (sum / 2 < P[i]) {
			cout << S[i] << endl;
			return 0;
		}
	}
	cout << "atcoder" << endl;
	return 0;
}