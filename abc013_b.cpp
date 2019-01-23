#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin >> a >> b;
    cout << min((10 + a - b) % 10, (10 + b - a) % 10) << endl;
    return 0;
}