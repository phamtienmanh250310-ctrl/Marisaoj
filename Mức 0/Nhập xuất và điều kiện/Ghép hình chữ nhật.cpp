#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if (a == c || a == d || b == c || b == d) cout << "YES";
    else cout << "NO";
    return 0;
}
