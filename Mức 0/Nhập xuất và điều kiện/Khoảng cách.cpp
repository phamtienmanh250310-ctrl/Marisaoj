#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a, b, c, d; cin >> a >> b >> c >> d;
    double x = 0 + abs (a - c), y = 0 + abs(b - d);
    cout << setprecision(2) << fixed << sqrt(x * x + y * y);
    return 0;
}
