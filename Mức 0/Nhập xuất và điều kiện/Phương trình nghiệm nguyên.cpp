#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a, b; cin >> a >> b;
	double x = 0 + a, y = 0 + b;
    if (a == 0 && b == 0) cout << "INFINITE SOLUTIONS";
    else if (a == 0 || ((-y/x) != (-b/a))) cout << "NO SOLUTION";
    else cout << -(b / a);
    return 0;
}
