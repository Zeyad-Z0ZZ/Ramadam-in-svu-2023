// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/E

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
  ll ans = 0;
  for (int a = 0; a < x; a++)
  {
    cin >> v[a];
    ans |= v[a];
  }
  cout << ans;
  return 0;
}
