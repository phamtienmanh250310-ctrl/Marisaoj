#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a, b, c, x, y, z; cin >> a >> b >> c >> x >> y >> z;
    if (c < z) cout << 1;
    else if (c > z) cout << 2;
    else if (b < y) cout << 1;
    else if (b > y) cout << 2;
    else if (a < b) cout << 1;
    else cout << 2;
    return 0;
}
