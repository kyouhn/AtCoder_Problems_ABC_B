#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>a(N);
	int MAX = 0;
	int MIN = 9999999;

	for (int i = 0; i < N; i++) {
		cin >> a[i];
		MAX = max(MAX, a[i]);
		MIN = min(MIN, a[i]);
	}

	cout << MAX - MIN << endl;

	return 0;
}