// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/D

#include <bits/stdc++.h>
#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
long long mod = 1e9 + 7;
int main()
{

  fast
      ll l,
      r, n;
  bool ok = 0;
  cin >> l >> r >> n;
  ll med = (l + r) / 2;
  if (med * 3 == n)
  {
    ok = 1;
  }
  if (ok)
  {
    cout << "YES"
         << "\n";
    cout << med - 1 << " " << med - 2 << " " << med + 3 << "\n";
    cout << med + 4 << " " << med << " " << med - 4 << "\n";
    cout << med - 3 << " " << med + 2 << " " << med + 1 << "\n";
  }
  else
  {
    cout << "impossible";
  }
}
