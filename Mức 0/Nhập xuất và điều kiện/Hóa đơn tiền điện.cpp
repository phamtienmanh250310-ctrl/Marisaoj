#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll x, a, b, c, d; cin >> x >> a >> b >> c >> d;
    ll kq = 0;
    if (x > 0) {
        if (x < 51) {
            cout << a * x;
            return 0;
        }
        else kq += a * 50;
    }
    if (x > 50) {
        if (x < 101) {
            cout << kq + b * (x - 50);
            return 0;
        }
        else kq += b * 50;
    }
    if (x > 100) {
        if (x < 151) {
            cout << kq + c * (x - 100);
            return 0;
        }
        else kq += c * 50;
    }
    if (x > 150) kq += d * (x - 150);
    cout << kq;
    return 0;
}
