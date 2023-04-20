// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, t;
  cin >> n >> t;
  vector<ll> v(n);
  for (auto &it : v)
    cin >> it;
  ll l = 1, r = 1e18, md, ans;
  while (l <= r)
  {
    md = (l + r) / 2;
    ll cnt = 0;
    for (auto it : v)
      cnt += md / it;
    if (cnt >= t)
      r = md - 1, ans = md;
    else
      l = md + 1;
  }
  cout << ans;
  return 0;
}
