#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	
	sort(A.rbegin(), A.rend());
	for (int i = 0; i < A.size(); ++i) 
	{
		if (A[i] != A[i+1]) {
			cout << A[i+1] << endl;
			return 0;
		}
	}
	return 0;
}