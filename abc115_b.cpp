#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
 
	int s = 0, m = 0;
 
	for (int i = 0; i < n; ++i) {
		int p;
		cin >> p;
		s += p;
		m = max(m, p);
	}
 
	int ans = s - m / 2;
	cout << ans << endl;
}