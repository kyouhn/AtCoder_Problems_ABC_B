#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	int sum = 0;
	int pos = N;
	while (pos > 0) {
		sum += pos % 10;
		pos /= 10;
	}

	if (N % sum == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}