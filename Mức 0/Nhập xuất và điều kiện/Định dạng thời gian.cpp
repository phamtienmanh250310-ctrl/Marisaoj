#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll d; cin >> d;
    cout << d / 3600 << " " << (d % 3600) / 60 << " " << d % 60;
    return 0;
}
