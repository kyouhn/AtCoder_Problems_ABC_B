
#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	string S;
	cin >> N>> S;
	int ans = 0;
	
	for (int i = 0; i < N; i++) {
		vector<int> V(26, 0);
		int now = 0;
		for (int j = 0; j < i; j++) {
			V[(int)S[j] - 97]++;
		}

		for (int j = i; j < N; j++) {
			if (V[(int)S[j] - 97]) {
				now++;
				V[(int)S[j] - 97] = 0;
			}
		}
		ans = max(ans, now);
	}

	cout << ans << endl;
	return 0;
}