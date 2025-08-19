#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    double x; cin >> x;
    if (int(sqrt(x)) == sqrt(x)) cout << "YES";
    else cout << "NO";
    return 0;
}
