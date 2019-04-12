#include <bits/stdc++.h>
using namespace std;

int A[100005];

int main() {
  int N;
  cin >> N;
  int a, ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (A[a]) ans++;
    A[a] = 1;
  }
  cout << ans << endl;
}
