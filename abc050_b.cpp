#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>T(N+1);
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		cin >> T[i];
		sum += T[i];
	}
	int M;
	cin >> M;

	while(M--){
		int ans = sum;
		int P, M;
		cin >> P >> M;
		cout << sum - T[P] + M << endl;
	}
	return 0;
}