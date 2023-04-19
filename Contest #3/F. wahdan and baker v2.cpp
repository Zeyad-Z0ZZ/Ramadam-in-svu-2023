// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/G

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast()
{
  ios_base::sync_with_stdio(false);
  cout.tie(nullptr);
  cin.tie(nullptr);
}
int main()
{
  fast();
  ll n, m, k;
  cin >> n >> m >> k;
  ll taken = (1LL << m) - 1;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
  {
    ll cnt = 0;
    for (int i = 0, a; i < m; i++)
    {
      cin >> a;
      if (a)
        cnt += (1LL << i);
    }
    v[i] = cnt;
  }
  for (int i = 0; i < (1LL << n); i++)
  {
    ll cnt = 0, num = 0;
    for (int j = 0; j < n; j++)
    {
      if ((i & (1LL << j)))
      {
        num++;
        cnt |= v[j];
      }
    }
    if (num <= k && cnt == taken)
      return cout << "Can pick", 0;
  }
  cout << "Can't pick";
  return 0;
}
