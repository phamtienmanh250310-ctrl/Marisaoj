#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a, b, c; cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (b == c) cout << a;
    else if (c == a) cout << b;
    return 0;
}
