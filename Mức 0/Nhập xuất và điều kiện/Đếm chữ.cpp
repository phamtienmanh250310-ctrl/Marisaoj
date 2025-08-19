#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char a, b; cin >> a >> b;
    if (a >= 'a') a = toupper(a);
    if (b >= 'a') b = toupper(b);
    ll x = abs(int(a - b)) - 1;
    if (x <= 0) cout << 0;
    else cout << x;
    return 0;
}
