#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>l(N + 1);
	vector<int>r(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> l[i] >> r[i];
	}
	int sum = 0;

	for (int i = 1; i <= N; i++) {
		sum += r[i] - l[i] + 1;
	}

	cout << sum << endl;
	return 0;
}