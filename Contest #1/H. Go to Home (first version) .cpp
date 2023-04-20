// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/H

#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a, b;
vector<vector<ll>> dp;
ll n, c, k;
ll solve(int i, bool tr)
{
  if (i == k - 1)
    return 0;
  ll &ret = dp[i][tr];
  if (~ret)
    return ret;
  if (tr)
    return ret = min(solve(i + 1, 0) + a[i], solve(i + 1, 1) + b[i]);
  else
    return ret = min(solve(i + 1, 0) + a[i], solve(i + 1, 1) + c + b[i]);
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> c >> k;
  a = b = vector<ll>(n - 1);
  for (auto &it : a)
    cin >> it;
  a.push_back(0);
  for (auto &it : b)
    cin >> it;
  b.push_back(0);
  dp = vector<vector<ll>>(n, vector<ll>(2, -1));
  solve(0, 0);
  cout << dp[0][0];
  return 0;
}
