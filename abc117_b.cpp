#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	int L;
	int res = 0;
	int res1 = 0;

	for (int i = 0; i < N; i++) {
		cin >> L;
			res1 += L;
			res = max(res, L);
	}

	res1 = res1 - res;
	
	if (res1 <= res) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
	return 0;
}