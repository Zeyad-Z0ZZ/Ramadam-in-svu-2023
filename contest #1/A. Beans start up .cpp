// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/A

#include <bits/stdc++.h>
#define el '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;
typedef long long ll;
const double EPS = 1e-6;
const ll Mod = 1e18 + 7;
const ll OO = 0x3f3f3f3f;
void fast()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
int main()
{
    /*-->{((*/ fast(); /*))}<--*/
    ll x, y, z, z1;
    cin >> x >> y >> z;
    z1 = z;
    while (z >= x || z >= y)
    {
        if (z % x > z % y && y <= z)
            z -= y;
        else
            z -= x;
    }
    cout << z1 - z;
    return 0;
}
