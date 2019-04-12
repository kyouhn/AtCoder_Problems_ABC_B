#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	int sum = 0;
	int cnt = 0;
	vector<int>m(N);

	for (int i = 0; i < N; i++) {
		cin >> m[i];
		sum += m[i];
		cnt++;
	}
	sort(m.begin(), m.end());
	cout << ((X - sum) / m[0]) + N << endl;


	return 0;
}