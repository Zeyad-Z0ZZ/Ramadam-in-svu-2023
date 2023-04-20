// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/H

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())
#define endl "\n";
int main()
{
  std::ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    vector<pair<ll, ll>> temp(n);
    for (int i = 0; i < n; i++)
    {
      temp[i].first = a[i] + b[i];
      temp[i].second = a[i];
    }
    sort(all(temp));
    ll ans = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
      if (temp[i].first - x <= m)
      {
        ans++;
        m -= temp[i].first - x;
        x = temp[i].second;
      }
    }
    cout << ans << endl;
  }
}