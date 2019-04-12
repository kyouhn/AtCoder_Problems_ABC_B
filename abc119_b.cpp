#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;
	double x[100];
	string u[100];

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> u[i];
	}

	double ans = 0;
	for (int i = 0; i < N; i++) {
		if (u[i] == "BTC") {
			x[i] = x[i] * 380000.0;
		}
		ans += x[i];
	}

	cout << ans << endl;
	return 0;
}