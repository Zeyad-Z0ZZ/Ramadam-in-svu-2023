// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/B

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ft first
#define sd second
#define ed '\n'
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fixed(x) fixed << setprecision(x)
#define mod 1'000'000'007
#define OO 2'000'000'000
using namespace std;
void Accept()
{
  ios_base::sync_with_stdio(false);
  cout.tie(nullptr);
  cin.tie(nullptr);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
int main()
{
  Accept();
  ll n, len = -OO;
  cin >> n;
  pair<int, int> p;
  ll mid = n / 2;
  string s, pre, test2, test, remove = "";
  cin >> s;
  for (int i = 0; i < mid; i++)
  {
    for (int j = i; j < mid; j++)
    {
      test = "";
      for (int k = i; k <= j; k++)
      {
        test += s[k];
      }
      ll z = n - (i + 1 + sz(test)) + 1;
      test2 = s.substr(z, sz(test));
      if (test2 == test && sz(test) > len)
      {
        len = sz(test);
        remove = test2;
        p.ft = i;
        p.sd = z;
      }
    }
  }
  if (remove.empty())
    cout << n << ed << s;
  else
  {
    cout << max(0LL, n - sz(remove) * 2) << ed;
    for (int i = p.ft; i < (p.ft + sz(remove)); i++)
      s[i] = '.';
    for (int i = p.sd; i < (p.sd + sz(remove)); i++)
      s[i] = '.';
    for (int i = 0; i < n; i++)
      if (s[i] != '.')
        cout << s[i];
  }
  return 0;
}