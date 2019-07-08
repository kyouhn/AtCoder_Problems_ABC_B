#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int N, L;
	cin >> N >> L;
	vector<int>A(N);
	for (int i = 0; i < N; i++)
	{
		A[i] = L + i;
	}

	int ans = L;

	for (int i = 0; i < N; i++)
	{
		if (abs(ans) > abs(L + i)) {
			ans = L + i;
		}
	}

	cout << N * (2 * L + N - 1) / 2 - ans << endl;
	return 0;
}