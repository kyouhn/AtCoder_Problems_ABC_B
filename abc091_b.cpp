#include"bits/stdc++.h"
using namespace std;

int main() {
	int N, M;
	cin >> N;
	string s[10000];
	map<string,int>A;
	
	for (int i = 0; i < N; i++) {
		cin >> s[i];
		A[s[i]]++;
	}
	cin >> M;

	for (int i = N + 1; i <= N + M; i++)
	{
		cin >> s[i];
		A[s[i]]--;
	}
	int ans = 0;

	for (int i = 0; i < N + M; i++) {
		ans = max(ans, A[s[i]]);
	}

	cout << ans << endl;
	return 0;
}