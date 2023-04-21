// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/F


#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
#define fast cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
using namespace std;
int main()
{
  fast
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i)
  {
    cin >> b[i];
  }
  sort(all(b));
  vector<ll> ans(n);
  for (int i = 0; i < m; ++i)
  {
    ll cur = upper_bound(all(a), b[i]) - a.begin();
    cur--;
    ans[cur]++;
  }
  for (int i = 0; i < n; ++i)
  {
    cout << ans[i] << " ";
  }
}
