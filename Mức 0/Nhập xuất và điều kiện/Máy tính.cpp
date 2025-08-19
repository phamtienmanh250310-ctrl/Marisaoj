#include <bits/stdc++.h>
#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; getline(cin, s);
    string s1 = s.substr(0, s.find(" ")), d = s.substr(s.find(" ") + 1, 1);
    s.erase(s.find(" "), 1);
    string s2 = s.substr(s.find(" ") + 1, s.size() - 1 - s.find(" "));
    double x = stod(s1), y = stod(s2);
    if (y == 0) cout << "ze";
    else if (d == "+") cout << setprecision(3) << fixed << x + y;
    else if (d == "-") cout << setprecision(3) << fixed << x - y;
    else if (d == "*") cout << setprecision(3) << fixed << x * y;
    else if (d == "/") cout << setprecision(3) << fixed << x / y;
    return 0;
}
