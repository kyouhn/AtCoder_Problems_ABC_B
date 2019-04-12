#include"bits/stdc++.h"

using namespace std;

int main() {
	double N;
	cin >> N;
	vector<double>A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] != 0) {
			cnt++;
		}
		sum += A[i];
	}

	if (sum%cnt == 0) 
	{
		cout << sum / cnt << endl;
	}
	else {
		
		cout << sum / cnt + 1<< endl;
	}

	return 0;
}