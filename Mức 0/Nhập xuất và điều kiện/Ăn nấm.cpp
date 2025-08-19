#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll x, y; cin >> x >> y;
    ll dencn = 8 - x, kq = 0;
    if (dencn < 2) {
        y -= dencn + 1;
        if (y < 2) {
            cout << 0;
            return 0;
        }
    }
    else if (dencn > 1) {
        y -= dencn + 1;
        if (y < 2) {
            ll tam = y + dencn + x;
            if (tam > 7) tam--;
            if (tam > 8) tam--;
            tam++;
            cout << tam - x;
            return 0;
        }
        kq += dencn - 1;
    }
    kq += (y / 7) * 5;
    y %= 7;
    if (y > 5) kq += 5;
    else kq += y;
    cout << kq;
    return 0;
}
