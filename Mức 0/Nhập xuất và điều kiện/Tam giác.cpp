#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a[5]; cin >> a[1] >> a[2] >> a[3];
    sort(a + 1, a + 4);
    if ((a[1] + a[2] < a[3]) || (a[3] - a[2] > a[1])) cout << "NO";
    else cout << "YES";
    return 0;
}
