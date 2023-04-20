// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/F

#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <set>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
// Contest #1
#define ll long long
void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].first;
  for (int i = 0; i < n; i++)
    cin >> v[i].second;
  priority_queue<ll> q;
  sort(v.begin(), v.end());
  ll res = m - v[0].first - v[0].second;
  q.push(v[0].second);
  ll cnt = 0;
  if (res >= 0)
    cnt++;

  for (int i = 1; i < n; i++)
  {
    res -= v[i].first - v[i - 1].first;
    res -= v[i].second;
    q.push(v[i].second);
    while (res < 0 && q.size())
    {
      res += q.top();
      q.pop();
    }
    cnt = max(cnt, (ll)q.size());
  }
  cout << cnt << endl;
}
int main()
{
  std::ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  int t = 1;
  cin >> t;
  while (t--)
    solve();
}