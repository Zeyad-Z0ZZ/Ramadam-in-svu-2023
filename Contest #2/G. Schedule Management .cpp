// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/G

#include <bits/stdc++.h>
#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
int arr[200005];
int n, m;
map<int, ll> mp;
bool valid(ll mid)
{
  ll cnt = 0;
  ll ext = 0;
  for (int i = 1; i <= n; i++)
  {
    if (mid >= mp[i])
    {
      cnt += (mid - mp[i]) / 2;
    }
    else
    {
      ext += mp[i] - mid;
    }
  }
  if (ext <= cnt)
    return true;
  return false;
}
int main()
{
  fast;
  int t;
  cin >> t;
  while (t--)
  {
    mp.clear();
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    ll l = 1;
    ll r = INT_MAX;
    while (l < r)
    {
      ll mid = (l + r) / 2;
      if (valid(mid))
        r = mid;
      else
        l = mid + 1;
    }
    cout << r << endl;
  }
}