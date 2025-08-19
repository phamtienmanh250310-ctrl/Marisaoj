#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    double n; cin >> n;
    if (n >= 9) cout << "VERY TOXIC";
    else if (n >= 5) cout << "TOXIC";
    else cout << "SAFE";
    return 0;
}
