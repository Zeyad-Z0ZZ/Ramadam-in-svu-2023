// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/D

#include <bits/stdc++.h>
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
using namespace std;
int main()
{
  fast int n, k;
  cin >> n >> k;
  int v[n + 1];
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans = ((ans + k + 1) % i);
  }
  reverse(v, v + n);
  cout << v[ans];
}