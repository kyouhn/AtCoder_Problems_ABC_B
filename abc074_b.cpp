#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int>x(N);
	for (int i = 0; i < N; i++)
	{
		cin >> x[i];
	}
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		ans += min(x[i], K - x[i]);
	}
	cout << ans * 2 << endl;

	return 0;
}