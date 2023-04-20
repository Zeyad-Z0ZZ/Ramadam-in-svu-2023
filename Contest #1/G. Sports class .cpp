// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/G

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
  fast();
  ll x;
  cin >> x;
  vector<ll> v(x);
  for (int a = 0; a < x; a++)
  {
    cin >> v[a];
  }
  for (int a = 0; a < x; a++)
  {
    bool ok = 0;
    for (int b = a + 1; b % x != a; b++)
    {
      b %= x;
      if (v[a] < v[b])
      {
        ok = 1;
        cout << v[b] << " ";
        break;
      }
    }
    if (ok == 0)
      cout << -1 << " ";
  }
  return 0;
}